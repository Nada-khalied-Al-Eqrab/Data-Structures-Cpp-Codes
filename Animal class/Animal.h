//header file
//class definition
class Animal{
	//data members
	string name;
	float weight, price;
	int age;
	//function members
	public:
		Animal(); //default constructor
		void set_name(string n);
		void set_weight(float w);
		void set_price(float p);
		void set_age(int a);
		string get_name();
		float calculate_weight();		
};
