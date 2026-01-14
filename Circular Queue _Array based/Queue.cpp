#include<iostream>
#include"Queue.h"
using namespace std;


// Constructor with argument, size is nelements, default 128

Queue::Queue(int nelements)
{  MaxSize = nelements; queue = new int[MaxSize];
   front = 0; rear = -1; count = 0;
}

// Copy Constructor

Queue::Queue(const Queue &original)
 :MaxSize(original.MaxSize), front(original.front),
 rear(original.rear), count(original.count)
	{
		queue = new int[MaxSize];
		for (int i = 0; i < MaxSize; i++)
		queue[i] = original.queue[i];
	 }
//Another way to write copy constructor
/*Queue::Queue(const Queue &original)
	{
	    MaxSize = original.Maxsize;
	    front = original.front;
	    rear = original.rear;
	    count = original.count;
		queue = new int[MaxSize];
		for (int i = 0; i < MaxSize; i++)
		queue[i] = original.queue[i];
	 }*/
// Destructor
Queue::~Queue()
{ delete [] queue;}
// Add to rear
void Queue::enqueue(int v)
{
	if(queueIsFull()) cout << "Queue is Full" << endl;
	else
	{
		rear = (rear + 1) % MaxSize;
		queue[rear] = v;  count++;
	}
}
// Remove from front
void Queue::dequeue(int &v)
{
	if(queueIsEmpty()) cout << "Queue is Empty" << endl;
	else
	{
		v = queue[front];
		front = (front + 1) % MaxSize; count--;
	}
}

int Queue::search(int &v)
{
	int found, index = front;
	if(queueIsEmpty())
	{
	cout << "Queue is Empty" << endl;

}
	else{
		for(int i=0;i<MaxSize;i++)
		{
			if(queue[index] == v)
			  {
			  found = index;
			  break;
			  }
			else
			index = (index + 1) % MaxSize;
		}
	}
	return found;

}


// Retrieve front without removing it
void Queue::queueFront(int &v) const
{
	if(queueIsEmpty()) cout << "Queue is Empty" << endl;
		else 	v = queue[front];
}
// Test for Empty queue

bool Queue::queueIsEmpty() const
{ return (count == 0); }

// Test for Full queue

bool Queue::queueIsFull() const
{ return (count == MaxSize); }

// Queue Length

int Queue::queueLength() const
{ return count; }


