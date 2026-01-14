// File:ListAppl.cpp
// Applies List Class: Ordered linked list

#include <iostream>
#include <string>
#include "List.h"
#include"stdio.h"
using namespace std;
using std::string;

//exercises
int CountZero(List &L)
{
	int count = 0, d ;
	L.toFirst();
	while ( !L.curIsEmpty()) // L.curIsEmpty () != NULL
	{
		L.retrieveKey(d);
		if ( d == 0)
		count++;
		
		L.advance();	
	}
	return count;
}

int EvenKeys(List &L)
{
L.toFirst();
int count = 0; int k;
while (! L.curIsEmpty())
{
L.retrieveKey(k);
if (k % 2 == 0) count++;
L.advance();
}
return count;
}

void AppendLists(List &L,List &L1,List &L2)
{
int k=0;
char d;

L1.toFirst();
L2.toFirst();
while(!L1.curIsEmpty())
{
L1.retrieveData(d,k);
L.insertEnd(k,d);
L1.advance();
}
while(!L2.curIsEmpty())
{
L2.retrieveData(d,k);
L.insertEnd(k,d);
L2.advance();
}
}

int summation(List &l,List &l1)
{
	int sum=0;
	int x;
	l.toFirst();
	l1.toFirst();
	while(!l.curIsEmpty())
	{
		l.retrieveKey(x);
		sum+=x;
		l.advance();
	}
	while(!l1.curIsEmpty())
	{
		l1.retrieveKey(x);
		sum+=x;
		l1.advance();
	}
	return sum;
}
void split(List &l, List &l1,List &l2)
{
	int k;
	char d='A';
	l1.makeListEmpty(); l2.makeListEmpty();	
	l.toFirst();
	if(!l.listIsEmpty())
	{
		while(!l.curIsEmpty())
		{
		l.retrieveKey(k);
		if(k>=0)
		l1.insertEnd(k,d);
		else
		l2.insertEnd(k,d);
		
		l.advance();

	}
		
	}
	l.makeListEmpty();
}

bool Sorted(List &l)
{
	int d1, d2;

	if(l.listIsEmpty())
		cout<<"List Is Empty"<<endl;
	else
	{
	l.toFirst();
		while (!l.atEnd())
		{
			l.retrieveKey(d1);
			l.advance();
			l.retrieveKey(d2);
			
			if(d1>d2)
	     	{
	     	return false;
	     		break;
			 }
     		
		}
		return true;		
}
}
void difference(List &l, List &l1, List &output)
{
	int x , x1, diff=0;
	int count = l.listSize();
	int count1 = l1.listSize();
	if(count != count1)
	cout<<"The two lists are not equal ..."<<endl;
	else{
		l.toFirst();
		l1.toFirst();
	while(!l.curIsEmpty()&&!l1.curIsEmpty())
	{
	l.retrieveKey(x);
	l1.retrieveKey(x1);
	diff = x - x1;
	output.insertEnd(diff,'o');
	l.advance(); l1.advance();
    }
		}
		

}

int main()
{
	List l, l1, out;
	l.insertEnd(5,'a');
	l.insertEnd(4,'b');
	l.insertEnd(3,'a');
	l.insertEnd(4,'b');
	
	l1.insertEnd(0,'c');
	l1.insertEnd(1,'c');
	l1.insertEnd(2,'c');
	l1.insertEnd(3,'c');
	
	difference(l,l1,out);
	out.traverse();
	//l.selectionSort();
	//l.insertionSort();
	//l.traverse();
	
/*	List L1; 
	int nodes_count = 0;
	
	L1.insertEnd(0,'a');
	L1.insertAfter(1,'b');
	L1.insertBefore(0,'w');
	L1.insertFirst(0,'x');
	
	nodes_count = CountZero(L1);
	cout<<"Nodes count = " << nodes_count<< endl;

	List clist, clist1 , clistR;
	string s;
	char c;
	int i, count, output1,output2,output3;
	bool keyfound;
	
	int result = 0;
	

  
  clist1.insertEnd(6,'a');
  clist1.insertEnd(7,'b');
  clist1.insertEnd(8,'c');
  clist1.insertEnd(9,'d');

	// Read a string
	cout << "Enter a string:" << endl;
	getline(cin,s);
	cout << s << endl;
	for (i = 0; i < s.length(); i++)
	{

		c = toupper(s.at(i));
		clist.insertEnd(i,c);
	}
	
	  AppendLists(clistR,clist,clist1);
	  


//	cout<<"LIST CONTENT"<<endl ;
//	clist.traverse();
	//cout <<"LIST SIZE    " << clist.listSize() << endl;
//	cout<<"list size using recursive function : "<< clist.Recursive_List_Size()<<endl;
//cout<<"display list using recursive function :" << clist.DispalyList()<<endl;
	
//	result = EvenKeys(clist);
//	cout<<"The even keys = " << result <<endl;
	cout<<"the content of the two appended lists :"<<endl;
	clistR.traverse();
	cout<<endl;
	clist.~List();
//	cout <<"AFTER CALLING DESTRACTOT    " << clist.listSize() << endl;

	getchar();*/

//	l.insertEnd(1,'a');
//	l.insertEnd(2,'b');
//	l.insertEnd(3,'c');
//	
//	x.insertEnd(10,'a');
//	x.insertEnd(20,'a');
//	x.insertEnd(30,'a');
//	x.insertEnd(40,'a');
//	x.insertEnd(50,'a');
//		List l,m,x;
//		bool result;
//	m.insertEnd(1,'f');
//	m.insertEnd(2,'i');
//	m.insertEnd(3,'a');
//		m.insertEnd(5,'a');
//	
//	 cout<< m.Sortedlist();
	// cout<<Sorted(m);
	
//	m.insertEnd(7,'x');
//	m.insertEnd(-2,'a');
//	m.insertEnd(5,'a');
//	m.insertEnd(-8,'a');

//m.reverse();
//m.traverse();
	
//	split(m,l,x);//function calling
//	
//	cout<<"data in first list +"<<endl;
//	l.traverse();
//	cout<<endl;
//	cout<<"data in second list -"<<endl;
//	x.traverse();
	
	
	//cout<<"the sum = "<<summation(l,m)<<endl;
	
	//cout<<m.getMiddle();
	

	return 0;
}
