#pragma once
using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include "order.h"
#include "customer.h"
#include "catalog.h"
#include "sales_associate.h"

class Store{
private:
    vector<Order> orders;
    Catalog catalog;
    vector<Customer> customers;
<<<<<<< HEAD
=======
    //This being camel case caused a headache
>>>>>>> Andrew-H
    vector<SalesAssociate> sales_associates;
public:
    Store();
    void save(string filename);
<<<<<<< HEAD
    void open(string filename);
    void open_head(string s);
    void open_torso(string s);
    void open_arm(string s);
    void open_locomotor(string s);
    void open_battery(string s);
    void open_model(string s);
    void open_customer(string s);
    void open_sales_associate(string s);
    void open_order(string s);
    void add_order(Order _order);
    void add_catalog(Catalog _catalog);
    void add_customer(Customer _customer);
    void add_sales_associate(SalesAssociate sales_associate);
    Catalog get_catalog();
=======
    void save_orders(ostream& ofs);
    void open(string filename);
    void open_orders(istream& ifs);
    void add_order(Order _order);
    void add_catalog(Catalog _catalog);
    void add_customer(Customer _customer);
    void add_sales_associate(SalesAssociate _sales_associate);
>>>>>>> Andrew-H

};
