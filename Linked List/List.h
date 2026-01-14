// File:List.h
// Definition of Simple Linked List Template Class

#ifndef LIST_H
#define LIST_H

// Specification of the class

//template <class keyType, class dataType>

class List
{
	public:

	// Member Functions
	// Create an empty List
	List();
	// Destroy List
	~List();

	// Functions Prototype Definitions

	bool listIsEmpty() const;
	bool curIsEmpty() const;
	void toFirst();
	bool atFirst() const;
	void advance();
	void toEnd();
	bool atEnd() const;
	int  listSize() const;
	void updateData(const char & );
	void retrieveData(char &, int &) const;
	void retrieveKey(int &) const;
	void insertFirst(const int &, const char & );
	void insertAfter(const int &, const char & );
	void insertBefore(const int &, const char& );
	void insertEnd(const int &, const char & );
	void deleteNode();
	void deleteFirst();
	void deleteEnd();
	void makeListEmpty();
	bool search(const int & );
	void orderInsert(const char &, const int & );
	void traverse();
	
	//exercises
	int getMiddle();
	void reverse();
	bool Sortedlist();
	void selectionSort();
	void insertionSort();
	
	//exercises
	int Recursive_List_Size( ) ;
	void DispalyList( ) ;

	
	

private:
	// Node Class
	   class node
	   {
		public:
			int key; 		// key
			char data;		// Data
			node *next;			// pointer to next node
		}; // end of class node declaration

	   typedef node * NodePointer;

	// Pointers
	NodePointer head, cursor, prev;
	
	//exercises
	int List_Size2( NodePointer h) ;
	void Display( NodePointer h);

};
#endif // LIST_H

