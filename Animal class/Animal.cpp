//source file
//function implementation
//return type classname :: function prototype
#include"Animal.h"
Animal::Animal()
{
	price = 0;
}
void Animal::set_name(string n)
{
	name = n;
}
void Animal::set_weight(float w)
{
   weight = w;	
}
void Animal::set_price(float p)
{
	price = p;
}
void Animal::set_age(int a)
{
	age = a;
}
string Animal::get_name()
{
	return name;
}
float Animal::calculate_weight()
{
	return (weight/1000);
}
