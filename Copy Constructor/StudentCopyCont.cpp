#include<iostream>
using namespace std;
class student{
	string name;
	int id;
	int size;
	float *grades;
	
public:
	student()
	{
		size = 5;
		grades = new float[size];
	}
	//copy constructor
	student(const student &s)
	{
		id = s.id;
		size = s.size;
		name = s.name;
		grades = new float[size];
		for(int i=0;i<size;i++)
		grades[i]= s.grades[i];
	}
	
	void set_grades()
	{
		cout<<"enter your grades";
		for(int i=0;i<size;i++)
		cin>>grades[i];
	}
	void set_id(int i)
	{
		id = i;
	}
	void set_name(string n)
	{
		name = n;
	}
	string get_name()
	{
		return name;
	}
	int get_id()
	{
		return id;
	}
};

int main()
{
	student s;
	s.set_name("Mona");
	s.set_id(1);
	s.set_grades();
	
	student s2(s);
	//student s2 = s;
	
	cout<<"S2 name = " << s2.get_name()<<endl;
	cout<<"S2 id ="<< s2.get_id()<<endl;
	
	s2.set_id(5);
	cout<<"s id"<<s.get_id()<<endl;
	cout<<"s2 id"<<s2.get_id()<<endl;
}
