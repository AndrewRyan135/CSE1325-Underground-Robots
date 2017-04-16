#include "customer.h"

string Customer::to_string()
{
	string output = "";
	output = "Customer info: \n\n";
	output = output + "Name: " + name + "\n";

	string str;
	ostringstream temp;
	temp<<number;
	str = temp.str();

	output = output + "Number: " + str + "\n";

	output = output + "Phone number: " + phonenumber + "\n";

	output = output + "E-mail: " +email;

	return output;
}

string Customer::name() {return name;}

void Customer :: save_customer(ostream& ofs)
{
    ofs << "7"
    << name << endl
    << number << endl
    << phonenumber << endl
    << email << endl;
}

int Customer :: get_customer_number()
{
    return number;
}
