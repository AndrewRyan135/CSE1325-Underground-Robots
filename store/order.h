#ifndef ORDER_H
#define ORDER_H
#include "robot.h"
#include "customer.h"
#include "sales_associate.h"
#include <fstream>
#include <iosteam>
using namespace std;

class Order
{
	public:
	  Order(int _order_number, string _date, Robot_model _robot_model, int _quantity,
		Customer _customer, int _status, SalesAssociate _sales_associate);
	  double robot_cost();
	  double extended_price();
	  //getters
	  int get_order_number();
	  string get_date();
	  Robot_model get_robot_model();
	  int get_quantity();
	  Customer get_customer();
	  int get_status();
	  Sales_associate get_sales_associate();
	  //File insertion
	  friend ostream& operator<<(ostream& os, const Order x);
	  //File extraction
	  friend istream& operator>>(istream& is, Order x);
	private:
	  int order_number;
	  string date;
	  Robot_model robot_model;
	  int quantity;
	  Customer customer;
	  int status;
	  SalesAssociate sales_associate;
};

#endif
