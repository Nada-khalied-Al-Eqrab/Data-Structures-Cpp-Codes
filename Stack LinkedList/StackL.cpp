// File:StackL.cpp
// Linked List Stack Class implementation

#include<iostream>
#include"StackL.h"
using namespace std;

// Class Constructor
//template <class Type>
StackL::StackL()
{ top = NULL; count=0;}

// Class Destructor
//template <class Type>
StackL::~StackL()
{	NodePointer cursor;
	while(top != NULL) 
	{ 	cursor = top;	top = top->next;
		delete cursor; 	}
}

// return True if stack is empty
//template <class Type>
bool StackL::stackIsEmpty() const
{ return (top == NULL);}


// push a node with data (v) at the top of the stack; 
// the new node becomes the top node.
//template <class Type>
void StackL::push(int v)
{ 	NodePointer pnew = new node ;
	pnew->e = v; pnew->next = top; top = pnew; 
	count++;}


void StackL::push(char v)
{ 	NodePointer pnew = new node ;
	pnew->e = v; pnew->next = top; top = pnew; 
	count++;}


// Pop top node. Next node becomes top node.
//template <class Type>
void StackL::pop(int &v)
{	NodePointer cursor;
	if(stackIsEmpty()) cout << "Stack Underflow" << endl; 
	else 
	{ v = top->e; cursor = top;
	  top = top->next; delete cursor;
	  }
	  count--;

}

void StackL::pop(char &v)
{	NodePointer cursor;
	if(stackIsEmpty()) cout << "Stack Underflow" << endl; 
	else 
	{ v = top->e; cursor = top;
	  top = top->next; delete cursor; }
	  count--;

}

// Retrieve top node without removing it
//template <class Type>
void StackL::stackTop(int &v) const
{	
	if(stackIsEmpty()) cout << "Stack Underflow" << endl; 
	else 
	{ v = top->e; }

}

int StackL::stackSize(){
	return count;
}
