// File:List.cpp
// Simple Linked List Class implementation file

#include <iostream>
#include"List.h"
using namespace std;
using std::string;


// Member Functions
// Class Constructor
//template <class keyType, class dataType>
List::List()
{
	head = NULL; cursor = NULL;  prev = NULL;
}

// Class Destructor
//template <class keyType, class dataType>
List::~List()
{
	makeListEmpty();
}

// return True if list is empty
//template <class keyType, class dataType>
bool List::listIsEmpty() const
{
	return (head == NULL);
}

// return True if current position is empty
//template <class keyType, class dataType>
bool List::curIsEmpty() const
{
	return (cursor == NULL);
}

// to make the current node the first node; if list is empty,
// the current position is still empty
//template <class keyType, class dataType>
void List::toFirst() 
{
	cursor = head;  prev = NULL;
}

// to return True if the current node is the first node or
// if the list and the current position are both empty.
//template <class keyType, class dataType>
bool List::atFirst() const
{
	return (cursor == head);
}

// to advance to next node. Assume the current position
// is nonempty initially.
//template <class keyType, class dataType>
void List::advance() 
{
	prev = cursor;
	cursor = cursor->next;
}

// to make the current node the tail node;
// if list is empty, the current position is still empty
//template <class keyType, class dataType>
void List::toEnd()
{
	toFirst();
	if (! listIsEmpty())
		while ( cursor->next != NULL) advance();
}

// to return True if the current node is the tail node or
// if the list and the current position are both empty.
//template <class keyType, class dataType>
bool List::atEnd() const
{
	if ( listIsEmpty()) return true;
		else if (curIsEmpty()) return false;
			else return (cursor->next == NULL);
}

// to return the size of the list
//template <class keyType, class dataType>
int List::listSize() const
{
	NodePointer q; // node * q;
	 	int count;
	q = head;	count = 0;
	while (q != NULL)
	{
		count++; 	q = q->next;
	}
	return count;
}

// to update the data portion of the current node to contain el;
// assume the current position is nonempty.
//template <class keyType, class dataType>
void List::updateData(const char &d)
{
	cursor->data = d;
}

// to return the data in the current node;
// assume the current position is nonempty.
//template <class keyType, class dataType>
void List::retrieveData(char &d, int &k) const
{
	d = cursor->data; //return cursor->data
	k = cursor ->key;
}
//exercise
int List::getMiddle()
{
	NodePointer p,q;
	int count = 0;
	p = head; 
	while(p!=NULL)
	{
		count++;
		p= p->next;		
	}
	q=head;	
	for(int i=0;i<(count/2);i++)
	{
		q=q->next;		
	}
	
	return q->key;
}

void List::retrieveKey(int &k) const
{
	k = cursor->key; //return cursor->data
}

// insert a node with data (el) at the head of the list;
// the new node becomes the current node.
//template <class keyType, class dataType>
void List::insertFirst(const int &k, const char &d )
{
	NodePointer pnew; //node * pnew;
	pnew = new node;
	pnew->key = k; pnew->data = d;
	pnew->next = head;
	head = pnew;
	cursor = head;
	prev = NULL;
}



// insert a node with data (el) after the current node
// without changing the current position;
// assume the current position is nonempty in a non-empty list.
//template <class keyType, class dataType>
void List::insertAfter(const int &k, const char &d )
{
	NodePointer pnew;
	pnew = new node;
	pnew->key = k; pnew->data = d;
	pnew->next = cursor->next;
 	cursor->next = pnew;
 	prev = cursor;
 	cursor = pnew;
}


// insert a node with data (el) before the current node,
// current position becomes the new node.
//template <class keyType, class dataType>
void List::insertBefore(const int &k, const char &d )
{
	NodePointer pnew;
	pnew = new node;
	pnew->key = k; pnew->data = d;
	pnew->next = cursor; //pnew->next = prev ->next
    prev->next = pnew;
	cursor = pnew;
}

// insert a node with data (el) at the end of the list,
// current position becomes the new node.
//template <class keyType, class dataType>
void List::insertEnd(const int &k, const char &d )
{
	if (listIsEmpty()) insertFirst(k,d);
	else {toEnd(); insertAfter(k,d); }
}




// delete the current node and set the current position to the next node;
// if the current node is the last node initially, the current position becomes empty;
// assume the current position is nonempty initially.
//template <class keyType, class dataType>
void List::deleteNode()
{
	NodePointer q;
   	if(! curIsEmpty())
	{			// current node is not empty
		if (atFirst()) 	// delete head node
   		{	q = cursor;
			cursor = cursor->next;
			head = cursor;
      		delete q;
      		//q= head;
      		//head = head->next;
      		//cursor = head;
      		//delete q;
		}

		else 		// delete non-head node
   		{	q = cursor;
			cursor = cursor->next;
			prev->next = cursor;
			delete q;
		}
   }
}

// delete the first node and set the current position to the next node;
// if it was initially the only node, the current position becomes empty;
// assume the current position is nonempty initially.
//template <class keyType, class dataType>
void List::deleteFirst()
{
	if(! listIsEmpty()) {toFirst(); deleteNode();}
}

// delete the last node and set the current position to empty;
// assume the current position is nonempty initially.
//template <class keyType, class dataType>
void List::deleteEnd()
{
	if(! listIsEmpty()) {toEnd(); deleteNode();}
}

// delete whole list
//template <class keyType, class dataType>
void List::makeListEmpty()
{
	//head = NULL, prev = NULL , cursor = NULL
     toFirst();
     while (! listIsEmpty())
        deleteNode();
}

// search the list for the node with key part that matches (k).
// If found, set cursor to the node and return True,
// else return false and the current position becomes empty.
//template <class keyType, class dataType>
bool List::search(const int &k)
{
	bool found = false;
  	toFirst();
	while ((! found) && (cursor != NULL))
		if (k == cursor->key)  found = true;
			else advance();
	return found;
}

// insert a node in a position that maintains an ascending
// order of the key portion of the nodes.
//template <class keyType, class dataType>
void List::orderInsert(const char &d, const int &k)
{
	toFirst();
	while ((cursor != NULL) && (k > cursor->key))
		advance();
	if (prev == NULL)  insertFirst(k,d);
		else insertBefore(k,d);
}

// traverse list to print key and data fields
//template <class keyType, class dataType>
void List::traverse()
{


	toFirst();
	while (! curIsEmpty())
	{
		cout << cursor->data << " - "<<cursor->key << endl;
		advance();
	}
}

//exercises

//list size recursive
int List :: Recursive_List_Size( ) 

{ return List_Size2(head); } 

 int List :: List_Size2( NodePointer h) 
{ 
if (h == NULL) return 0; 
else return 1 + List_Size2(h->next); 
}

//display list recursive

void List :: DispalyList( ) 
{ 
 Display(head); 
} 

void List:: Display( NodePointer h) 
{ 
if (h == NULL) 
return;
 
else 
cout << h->key << " " << h->data << endl; 
Display(h->next); 
} 

void List::reverse()
{
	NodePointer next;
	toFirst();
	while(!curIsEmpty())
	{
		next = cursor->next;
		cursor->next = prev;
		prev = cursor;
		cursor = next;		
	}
	head = prev;
}

bool List::Sortedlist()
{
	int d1, d2;

	if(listIsEmpty())
		cout<<"List Is Empty"<<endl;
	else
	{
	toFirst();
		while (cursor->next!=NULL)
		{
			retrieveKey(d1);
			advance();
			retrieveKey(d2);
			
			if(d1>d2)
	     	{
	     	return false;
	     		break;
			 }
     		
		}
		return true;		
}
}

void List::selectionSort()
{
	node *p, *smallptr, *q;
	int smallest;
	p = head;
	
	while(p!=NULL)
	{
		smallptr = p;
		smallest = p->key;
		q = p->next;
		
		while(q!=NULL)
		{
			if(q->key <smallest)
			{
				smallptr = q;
				smallest = q->key;
			}
			q= q->next;
		}
		
		smallptr->key = p->key;
		p->key = smallest;
		p=p->next;
	}
}

void List::insertionSort()
{
	node*  current = head;
    node* insertionPointer = head;

    current = current->next;

    while(current != NULL){

        insertionPointer = head;

        while(insertionPointer->next != NULL){

            if (insertionPointer->data > current->data){

                int temp = current->key;
                current->key = insertionPointer->key;
                insertionPointer->key = temp;

            }
			else
			{
                insertionPointer = insertionPointer->next;
            }

        }

        current = current->next;
}
}






