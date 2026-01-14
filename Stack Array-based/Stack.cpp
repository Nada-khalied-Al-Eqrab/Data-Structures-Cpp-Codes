// File: Stack.cpp
// Stack template class implementation

#include <iostream>
#include"Stack.h"
using namespace std;


// Constructor with argument, size is nelements, default is 128
//template <class Type>
Stack::Stack(int nelements)
{  MaxSize = nelements;
stack = new int[MaxSize];  top = -1; count = 0;}

// Copy Constructor
//template <class Type>
Stack::Stack(const Stack &original)
	:MaxSize(original.MaxSize), top(original.top), count(original.count)
{
	stack = new int[MaxSize];
	for (int i = 0; i <= top; i++) stack[i] = original.stack[i];
}
/*
Stack::Stack(const Stack &original)
{
    MaxSize = original.Maxsize;
    top = original.top;
    count = original.count;
	stack = new int[MaxSize];
	for (int i = 0; i <= top; i++) stack[i] = original.stack[i];
}*/

// Destructor
//template <class Type>
Stack::~Stack()
{ delete [] stack;}

// Push
//template <class Type>
void Stack::push(int v)
{
	if(stackIsFull()) cout << "Stack Overflow" << endl;
	else stack[++top] = v;//++top; stack[top] = v;
	count++;
}

void Stack::push(char v)
{
	if(stackIsFull()) cout << "Stack Overflow" << endl;
	else stack[++top] = v;
}

// Pop
//template <class Type>
void Stack::pop(int &v)
{
	if(stackIsEmpty()) cout << "Stack Underflow" << endl;
	else
		v = stack[top--];
		count--;
}

void Stack::pop(char &v)
{
	if(stackIsEmpty()) cout << "Stack Underflow" << endl;
	else v = stack[top--];
}

// Retrieve stack top without removing it
//template <class Type>
void Stack::stackTop(int &v) const
{
	if(stackIsEmpty()) cout << "Stack Underflow";
	else v = stack[top];
}

void Stack::findMiddle(int &middle)
{
  middle = stack[count/2];
}

void Stack::deleteMiddle()
{
	int x,y; Stack s;
	if(!stackIsEmpty())
	{
		for(int i=0; i< count/2 ; i++)
		{
			pop(x);
			s.push(x);
		}
		pop(x);
		for(int i=0;i<count/2; i++)
		{
			s.pop(y);
			push(y);
		}
	}
	cout<<"deleted middle  = " <<x;
}


// Test for Empty stack
//template <class Type>
bool Stack::stackIsEmpty() const
{ return (top < 0); }

// Test for Full stack
//template <class Type>
bool Stack::stackIsFull() const
{ return (top >= (MaxSize-1)); }

int Stack::stackSize()
{ return count; }
