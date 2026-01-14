#include<iostream>
using namespace std;
class person{
private:
    string name;
    int age, id;
    float salary;

public:
    //default constructor
    person()
    {
      salary = 1000;
    }
    //overloaded constructor
    person(float s)
    {
        salary = s;
    }
    //copy constructor
   /* person(const person &p)
    {
        name = p.name;
        age = p.age;
        salary = p.salary;
        id = p.id;
    }*/
    //setter functions
    void set_name(string n)
    {
        name = n;
    }
    void set_id(int i)
    {
        id = i;
    }
    void set_age(int a)
    {
        age = a;
    }
     void set_salary(float s)
    {
        salary = s;
    }
    //getter functions
    string get_name()
    {
        return name;
    }
    int get_id()
    {
        return id;
    }
    int get_age()
    {
        return age;
    }
    float get_salary()
    {
        return salary;
    }

};

int main()
{
    person p ; //object using default constructor
    person p1(30000);//object using overloaded constructor
    //create the first object p
    p.set_age(30);
    p.set_id(1);
    p.set_salary(9000);
    p.set_name("Ahmed");
   // person p2(p);//object using copy constructor
    person p3(p); //p3 = p

    /*cout<<"P2 id = "<<p2.get_id()<<endl;
    cout<<"P2 age = " << p2.get_age() <<endl;
    cout<<"P2 salary =" << p2.get_salary()<<endl;
    cout<<"P2 name = " << p2.get_name()<<endl;*/

 	cout<<"P id = "<<p.get_id()<<endl;
    cout<<"P age = " << p.get_age() <<endl;
    cout<<"P salary =" << p.get_salary()<<endl;
    cout<<"P name = " << p.get_name()<<endl;
    
    p3.set_id(4);
    cout<<"P3 id = "<<p3.get_id()<<endl;
    cout<<"p id = "<< p.get_id()<<endl;
    /*p2.set_name("Mostafa");
    cout<<"P2 name = "<< p2.get_name()<<endl;
    
	//using of shallow copy constructor
    p2.set_salary(60000);
    cout<<"P2 Salary ="<< p3.get_salary()<<endl;*/


}

