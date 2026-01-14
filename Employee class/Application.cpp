//application file , main function

#include<iostream>
#include"emp.h" //inside main
using namespace std;

int main()
{
	Employee e; //object e form class employee use default constructor
	Employee e1(15000); // object e1 from class employee use overloaded constructor
	Employee e2(9000,123); // object e2 from class employee use overloaded contructor 2
	//setting name from user
	string a;
	cout<<"please enter employee name";
	cin>>a;
	e2.set_name(a);
	//e2.set_name("Ahmed Mostafa");
	e2.set_taxes(500);
	e2.set_add("Maadi");
	e2.set_age(40);
	
	cout<<"Employee net salary = "<< e2.calculate_salary();
	
}
