//Source file , function implementation , code
#include"emp.h" //inside source file

//return type classname :: function protoype

Employee::Employee(){
	salary = 8000 , net_salary = 0;	
}
Employee::Employee(float s)// overloaded constructor
	{
		salary = s, net_salary = 0 ;
	}
Employee::Employee(float s, int i)// overloaded constructor2
	{
		salary = s;
		net_salary = 0 ;
		id = i;
	}
	//setter functions
void Employee::set_id() 
	{
		id = i;
	}
void Employee::set_age(int a)
	{
		age = a;
	}
void Employee:: set_name(string n)
	{
		name = n;
	}
void Employee:: set_add(string add)
	{
		address = add;
	}
void Employee:: set_salary(float s)
	{
		salary = s;
	}
void Employee:: set_taxes(float t)
	{
		taxes = t;
	}
	//getter functions
int Employee:: get_id()
	{
		return id;
	}
int Employee:: get_age()
	{
		return age;
	}
string Employee:: get_name()
	{
		return name;
	}
string  Employee:: get_add()
	{
		return address;
	}
float Employee:: get_salary()
	{
		return salary;
	}
float Employee:: get_taxes()
	{
		return taxes;
	}
float Employee:: get_netsalary()
	{
		return net_salary;
	}
	//calculate salary
float Employee:: calculate_salary()
	{

		net_salary = salary - taxes;
		return net_salary; // get_netsalary();
	}
	
