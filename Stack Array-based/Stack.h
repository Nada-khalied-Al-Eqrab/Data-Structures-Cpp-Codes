// File: Stackt.h
// Stack template class definition.
// Dynamic array implementation

#ifndef STACK_H
#define STACK_H


//template <class Type>

class Stack
{
   public:

      Stack(int nelements = 128);		// Constructor
	  Stack (const Stack &);	// Copy Constructor
	  ~Stack();						// Destructor

	  // Member Functions
      void push(int );// Push
	  void push(char );
      void pop(int &);// Pop
	  void pop(char &);
	  void stackTop(int &) const;	// retrieve top
      bool stackIsEmpty() const;	// Test for Empty stack
      bool stackIsFull() const;		// Test for Full stack
      void findMiddle(int &);
      void deleteMiddle();
      int stackSize();

   private:
      int *stack;					// pointer to dynamic array
	  int top, MaxSize;
	  int count;

};

#endif // STACK_H


