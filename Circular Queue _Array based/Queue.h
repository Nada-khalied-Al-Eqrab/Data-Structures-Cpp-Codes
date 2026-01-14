class Queue
{
   public:

      Queue(int nelements = 128);		// Constructor
	  Queue (const Queue  &);	// Copy Constructor
      ~Queue();						// Destructor

	  // Member Functions
      void enqueue(int );			// Add to rear
	  void dequeue(int &); // Remove from front
	  void queueFront(int &) const;	// retrieve front
      bool queueIsEmpty() const;	// Test for Empty queue
      bool queueIsFull() const;		// Test for Full queue
	  int  queueLength() const;		// Queue Length
	  int search(int &);
	

   private:
      int *queue;					// pointer to dynamic array
	  int front, rear, count, MaxSize;

};
