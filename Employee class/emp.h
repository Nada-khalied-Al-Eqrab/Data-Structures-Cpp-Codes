//header file , class definition
class Employee{
	//data members
	string name, address;
	int id , age;
	float salary, taxes, net_salary;
	//function members
	public:
	Employee(); //default constructor
	Employee(float s);// overloaded constructor
	Employee(float s, int i);// overloaded constructor2
	//setter functions
	void set_id(int i);
	void set_age(int a);
	void set_name(string n);
	void set_add(string add);
	void set_salary(float s);
	void set_taxes(float t);
	//getter functions
	int get_id();
	int get_age();
	string get_name();
	string get_add();
	float get_salary();
	float get_taxes();
	float get_netsalary()
	//calculate salary
	float calculate_salary();
};
