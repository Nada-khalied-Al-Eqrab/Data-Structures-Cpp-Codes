#include<iostream>
using namespace std;

float Sum_grades(float a[], int size)
{
	float sum = 0;
	for (int i = 0 ;i<size;i++)
	sum += a[i];
	
	return sum;
}
class student{
	private:
	//data members	
	int id;
	string name;
	float *grades; //pointer for dynamic array
	int G_num;
	
	//function members
	public:
		//default constructor
		student()
		{
		G_num = 5;	// grades array size = 5
		grades = new float[G_num]; // array intialization 
		}
		//overloaded constructor
		student(int n)
		{
		G_num = n; // grades array size = n
		grades = new float[G_num]; // array intialization 	
		}
		void set_id(int i)
		{
			id = i;
		}
		//setter functions
		void set_name(string n)
		{
			name = n;
		}
		void set_grades(float a [])
		{
			for(int i=0;i<G_num;i++)
			grades[i] = a[i];
		}
		void set_grades()
		{
			cout<<"Enter your gades";
			for(int i=0;i<G_num ; i++)
			cin>>grades[i];
		}
		void set_gradesnum(int num)
		{
			G_num = num;
		}
		//set all data members
		void set_data(int i, string n, float x[])
		{
			id = i;
			name = n;
			for(int j=0;j<G_num;j++)
			grades[j] = x[j];
		}
		//getter functions
		int get_id()
		{
			return id;
		}
		string get_name()
		{
			return name;
		}
		int get_gradesnum()
		{
			return G_num;
		}
		float* get_grades() // return array address 
		{
			return grades;
		}
		//destructor
		~student()
		{
			delete [] grades;
		}
};

int main()
{
	student s ; // object by default constructor array, size = 5
	student *s2 = new student; //dynamic allocation
	student s1(6); // object by overloaded constructor array, size = 6
	int sid;
	float g[5], *grades_arr , *grades_s1 , GradesSum = 0;
	string sname;
	//cout<< "S grades numbers = " << s.get_gradesnum()<<endl;
	//cout<<" s1 grades numbers = "<< s1.get_gradesnum()<<endl;
   /* cout<<"enter id of student s";
	cin>> sid;
	cout<<"enter name of student s";
	cin>>sname;
	s.set_id(sid);
	s.set_name(sname);
	//fill array of grades
	cout<<"please enter grades"<<endl;
	for(int i=0;i<5;i++)
	cin>>g[i];
	s.set_grades(g);
	
	cout<<"<<<<<<show data for object s>>>>>"<<endl;
	cout<<"id ="<< s.get_id()<<endl;
	cout<<"name ="<<s.get_name()<<endl;
	grades_arr = s.get_grades(); //grades pointer
	cout<<"student grade"<<endl;
	for(int i=0;i<5;i++)
	cout<<grades_arr[i]<<endl;*/
	
	
	//fill data for object s1
	s1.set_id(222);
	s1.set_name("Ahmed Mohamed");
	s1.set_grades();
	
	//show s1 data
	cout<<"<<<<<<show data for object s1>>>>>"<<endl;
	cout<<"S1 id ="<<s1.get_id()<<endl;
	cout<<"S1 name = "<< s1.get_name() << endl;
	grades_s1 = s1.get_grades(); //grades pointer
	cout<<"student grade"<<endl;
	for(int i=0;i<6;i++)
	cout<<grades_s1[i]<<endl;
	
	//passing s1 array and its size to sum function
	GradesSum = Sum_grades(s1.get_grades(),s1.get_gradesnum()); //function calling
	cout<<"S1 grades summation = "<< GradesSum <<endl;
}

