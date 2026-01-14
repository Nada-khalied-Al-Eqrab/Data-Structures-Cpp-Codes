// File: StacktAppl.cpp
// Applies Stack template Class to reverse a string
#include <iostream>
#include <string>
#include<cstdlib>
#include "Stack.h"
using namespace std;


int GetBottom(const Stack & s_org)
{
Stack  s(s_org); //using the copy constructor
if ( s.stackIsEmpty())
{
cout <<"Stack underflow";
}
else{
int el;
while(!s.stackIsEmpty())
s.pop(el);
return el;
}
}

void Append( Stack &S, Stack &U)
{
	int el;
	if(! U.stackIsEmpty())
	{
		U.pop(el);
		Append(S,U);
		S.push(el);
	}
}


void swapStack(Stack &s)
{
int el1,el2;
while(!s.stackIsEmpty()){

s.pop(el1);
s.pop(el2);
s.push(el1);
s.push(el2);
}
}

int Max(Stack &s)
{
	int y = 0, x = 0 , max = 0;
	Stack copy;
	while (! s.stackIsEmpty())
	{
		s.pop(x);
		copy.push(x);

	}

	copy.pop(max);
	while ( !copy.stackIsEmpty())
	{
		copy.pop(y);
		if (x>y)
		{
			max = x;
		}
	}
	return max;

}

bool EqualStack(Stack s1,Stack s2)
{
	int x1,x2;
	bool same = false;
	Stack c1(s1), c2(s2);
	s1.stackTop(x1);
	s2.stackTop(x2);
	if (x1!=x2) return false;
	else
	{
	while(!c1.stackIsEmpty()&&!c2.stackIsEmpty())
	{
		c1.pop(x1);
		c2.pop(x2);
		if(x1!=x2)
		return false;
		else
		same = true;
		}
		return same;
	}
}




int main()  // Testing he Stackt Class
{			// Reverse a string and stack copy

	Stack s1,s2;
	int c=0;
	s1.push(2);
	s1.push(4);
	s1.push(5);
	s1.push(9);

	s1.stackTop(c);
	cout<<c;
	/*cout<<"before swap"<<c<<endl;
	swapStack(s1);
	s1.stackTop(c);
	cout<<"after swap"<<c<<endl;

	//cout<< GetBottom(s1);

	//s2.push(2);
	//s2.push(4);
	//s2.push(3);
	//s1.findMiddle(c);
	//cout<<c;
//	cout<<EqualStack(s1,s2);
	//cout<<	Max(s1);
//	s1.deleteMiddle();
	//s2.push(8);
	//s2.push(9);
	//Append(s1,s2);
	//swapStack(s1);
//	while(!s1.stackIsEmpty())
//	{ s1.pop(c); cout<< c;	}

	//int x = GetBottom(s1);
	//cout<<"the bottom  "<<x;
	//char c;
	//string instring = "Testing Stack Class";
	//string outstring = "";	cout << instring << endl;
	//int L = instring.length();
	//cout << "Pushing characters on s1\n";
	//for (int i = 0; i < L; i++) s1.push(instring.at(i));
	//cout << "Copying s1 to s2\n";
	////Stack s2 = s1;
	//cout << "Popping characters from s1\n";
	//while(!s1.stackIsEmpty())
	//{ s1.pop(c); s2.push(c); outstring = outstring + c;
	//}
	//cout << outstring << endl;
	//cout <<"s1 is now empty. Trying to pop from empty s1\n";
	//s1.pop(c);
	//cout << "Now popping contents of s2" << endl;
	//while(!s2.stackIsEmpty())
	//{ s2.pop(c); cout << c;	}
	//cout<< endl;
	system("pause");*/
	return 0;
}

