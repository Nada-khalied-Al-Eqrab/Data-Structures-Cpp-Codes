
class StackL
{
   public:
         
       StackL();						// Constructor
	  ~StackL();					// Destructor
      void push(int );				// Push
	  void push(char );				// Push
	  void pop(int &);
	  void pop(char &);				// Pop
	  void stackTop(int &) const;	// retrieve top
	  void stackTop(char &) const;
      bool stackIsEmpty() const;	// Test for Empty stack
      int stackSize();
      
   private:
	
	// Node Class
	   class node
	   {
		public:
			int e;					// stack element
			node *next;				// pointer to next node	       
		}; // end of class node declaration

	typedef node * NodePointer;

	NodePointer top;				// pointer to top
	int count;
}; 


