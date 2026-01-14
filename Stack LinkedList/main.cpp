// File: StackLAppl.cpp
// Applies Linked List Stack Class to reverse a string
#include <iostream>
#include<cstdlib>
#include <string>
#include "StackL.h"
using namespace std;

int sum(StackL &s)
{
	int x, sum = 0;
	StackL copy(s);
	while(!copy.stackIsEmpty())
	{
		copy.pop(x);
		sum+=x;		
	}
	return sum;
}
bool isIdentical(StackL &s, StackL &s1)
{
	int size1,size2, x1,x2;
	bool result = false;
	size1= s.stackSize();
	size2= s1.stackSize();
	if(size1!=size2)
	return false;
	else
	{
		while(!s.stackIsEmpty()&& !s1.stackIsEmpty())
		{
			s.pop(x1); s1.pop(x2);
			if(x1==x2)
			result= true;
			else
			return false;
		}
	}
}
void enqueue(int a,StackL &s)
{
	
	s.push(a);
}

void dequeue (StackL &s,int &x)
{
	StackL copy; int a;
	if(s.stackIsEmpty())
	cout<<"Stack underflow";
	else
	while (! s.stackIsEmpty())
	{
		s.pop(a);
		copy.push(a);
	}
	copy.pop(x);
	while(! copy.stackIsEmpty())
	{
		copy.pop(a);
		s.push(a);
    }
}
void RemoveBlanks(StackL &s)
{
	char d; 
	if (s.stackIsEmpty())
	return;
    else{
		s.pop(d);
		RemoveBlanks(s);
		if (d != ' ')
		s.push(d);
	}
}

//void RemoveBlanks(StackL &s)
//{
//	char d; StackL a;
//	while (!s.stackIsEmpty())
//	{
//		s.pop(d);
//		if (d != ' ')
//		a.push(d);	
//	}
//	while (!a.stackIsEmpty())
//	{
//		a.pop(d);
//		s.push(d);
//	}
//void RemoveBlanks(StackL &s)
//{
//	char d; StackL a;
//	if (s.stackIsEmpty())
//	return;
//else 	{
//		s.pop(d);
//		if (d != ' ')
//		a.push(d);	
//	RemoveBlanks(s);
//	}
////	while(!a.stackIsEmpty())
////	{
////		a.pop(d);
////		s.push(d);
////	}
//}
void AddStack(StackL &s)
{
int el1, el2;
if(!s.stackIsEmpty())
{
s.pop(el1);
if(!s.stackIsEmpty())
{
s.pop(el2);
s.push(el1 + el2);
AddStack(s);
}
else s.push(el1);
}
}

int maxItem(StackL &s)
{
	StackL copy(s);
	int max, v;
	if(!copy.stackIsEmpty())
	copy.stackTop(max);
	else
	cout<<"Stack is empty"<<endl;
	
	while(!copy.stackIsEmpty())
	{
		copy.pop(v);
		if(v>max)
		max = v;
	}
	return max;
}

void printNGE(int arr[], int size)
{
    StackL s;
    int element;
     s.push(arr[0]);
 
    // iterate for rest of the elements
    for (int i=1; i<size; i++)
    {
        int next = arr[i];
 
        if (!s.stackIsEmpty() )
        {
            // if stack is not empty, then
            // pop an element from stack
            s.pop(element);
            
 
            /* If the popped element is smaller
               than next, then
               a) print the pair
               b) keep popping while elements are
               smaller and stack is not empty */
            while (element < next)
            {
                cout << element << " --> " << next
                     << endl;
                if (s.stackIsEmpty())
                   break;
                s.pop(element);
            }
 
            /* If element is greater than next,
               then push the element back */
            if (element > next)
                s.push(element);
        }
 
        /* push next to stack so that we can find
           next greater for it */
        s.push(next);
    }
 
    /* After iterating over the loop, the remaining
       elements in stack do not have the next greater
       element, so print -1 for them */
    while (!s.stackIsEmpty())
    {
    	s.pop(element);
        cout << element << " --> " << -1 << endl;
    }
}

StackL sortStack(StackL input)
{

    StackL tmpStack;
    
    while (!input.stackIsEmpty())
    {
        // pop out the first element
        int x , temptop ,v; 
        input.pop(x);
        
 
        // while temporary stack is not empty
        // and top of stack is smaller than temp
        while (!tmpStack.stackIsEmpty() )
        {
        	tmpStack.stackTop(temptop);
        	if(temptop < x)
        	{
        		  // pop from temporary stack and
            // push it to the input stack
            tmpStack.pop(v);
			input.push(v);
			} 
        }
 
        // push temp in tempory of stack
        tmpStack.push(x);
    }
 
    return tmpStack;
}
 
void sortArrayUsingStacks(int arr[], int n)
{
    // Push array elements to stack
    StackL input;
    int x;
    for (int i=0; i<n; i++)
       input.push(arr[i]);
 
    // Sort the temporary stack
    StackL tmpStack = sortStack(input);

    // Put stack elements in arrp[]
    for (int i=0; i<n; i++)
    {
    	tmpStack.pop(x);
    	cout<<x;
        arr[i] = x ;
        
    }

    
}


bool IS_Ascending(StackL s)
{
	int n1 , n2;
	bool flag= true;
	StackL s1(s);
	while(!s1.stackIsEmpty() && s1.stackSize()>1){
		s1.pop(n1);
		s1.stackTop(n2);
		if(n2>n1)
		{
			flag = false;
			break;
    	}
	}
	return flag;
}




bool Is_balanced(string s){
	StackL s1;
	int top , x;


	for(int i=0;i<s.size();i++)
	{
	
	if(s1.stackIsEmpty())
		s1.push(s[i]);
			
		
	
	else 
	{
		s1.stackTop(top);
	
	if(top == '(' && s[i] == ')' ||  top == '{' && s[i] == '}' || top == '[' && s[i] == ']' )
			s1.pop(x);
		
			
	else 
	
			s1.push(s[i]);
	
	}
}
	
	if(s1.stackIsEmpty())
		return true;
	else
		return false;			

}

	

int main()
{
	StackL s, x;
	s.push(5);
	s.push(3);
	s.push(4);
//	s.push(7);
//	s.push(8);
//	s.push(9);


	//string paren;
	
//	cout<<"please enter string ..";
//	cin>>paren;
	
//cout<< 	Is_balanced(paren);
	cout<< IS_Ascending(s);
	/*int x[4] = {4,5,2,25};
	sortArrayUsingStacks(x,4);
	 cout<<"array after sorting :"<<endl;    
    for (int i=0; i<4; i++)
    {
    	cout<<x[i];
	}
	//printNGE(x,4);
	//StackL s, x;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	x.push(1);
//	x.push(2);
//	x.push(3);
//	cout<<maxItem(s);
	//cout<< x.stackSize();
	//cout<<isIdentical(x,s);
//	StackL s;
//	char x;
//	s.push('a');
//	s.push(' ');
//	s.push('b');
//	s.push(' ');
//	s.push('c');
//	//AddStack(s);
//	RemoveBlanks(s);
//	while(!s.stackIsEmpty())
//	{s.pop(x);
//	cout<<x;
//	}
//	string outstring;
//	char c;
//StackL s;
//s.push('a');
//s.push(' ');
//s.push('b');
//s.push(' ');
//s.push('d');
//RemoveBlanks(s);
//	while(!s.stackIsEmpty())
//	{	
//		s.pop(c);
//	outstring = outstring + c;
//	}
//	cout << outstring << endl;
//
//	StackL s; int m;
//	enqueue(1,s);
//	enqueue(2,s);
//	enqueue(3,s);
//	enqueue(4,s);
//	
//	dequeue(s,m);
//	cout<<"Elemenet 1 = " << m<<endl;
//	dequeue(s,m);
//	cout<<"Element 2 = " <<m<<endl;
	
//		StackL s;
//	string instring, outstring;
//	char c;
//	int i;
//
//	// Read a string
//	cout << "Enter a string:" << endl;
//	getline(cin,instring);
//	cout << instring << endl;
//	outstring = "";
//	for (i = 0; i < instring.length(); i++)
//	{
//		c = instring.at(i);
//		s.push(c);
//	}
//	while(!s.stackIsEmpty())
//	{
//		s.pop(c);
//		outstring = outstring + c;
//	}
//	cout << outstring << endl;
//	s.~StackL();
*/
	system("pause");
	return 0;
}
