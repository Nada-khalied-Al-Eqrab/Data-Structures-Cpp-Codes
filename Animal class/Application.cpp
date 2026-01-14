#include<iostream>
#include"Animal.h"
using namespace std;

int main()
{
	Animal a;
	a.set_name("LION");
	a.set_age(10);
	a.set_weight(6000);
	cout<< "Animal weight in KG : "<< a.calculate_weight();	
}
