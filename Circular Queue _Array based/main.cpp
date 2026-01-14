#include<iostream>
#include<conio.h>
#include"Queue.h"
using namespace std;

bool EqualQueues(Queue q,Queue q1)
{
	bool flag = false;
	Queue q2(q), q3(q1);
	int x,y;
	if ( q2.queueLength()!= q3.queueLength())
	return false;
	
	else{
		while (!q2.queueIsEmpty()&&!q3.queueIsEmpty())
		{
			q2.dequeue(x);  q3.dequeue(y);
			if(x==y)
			flag = true;
			else
			return false;
		}
	}
	return flag;
}
int min (Queue q)
{
	Queue q1(q);
	int min,x;
	q.queueFront(min);
	while (! q1.queueIsEmpty())
	{
		q1.dequeue(x);
		if(x < min)
		min = x;
	}
	return min;
}

int main()
{
	Queue q;
	int x=4;

	q.enqueue(5);
	q.enqueue(3);
	q.enqueue(4);
	//q.queueFront(x);
	//cout<<"front = "<<x<<endl;

	cout<<q.search(x);

//cout<< min(q);

//bool r = EqualQueues(q,q1);
//cout<<"result  =  "<< r;
	
	getch();
	return 0;
}
