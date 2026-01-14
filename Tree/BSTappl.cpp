// File: BSTappl.cpp
// Test class template binaryTree
#include <iostream>
#include <string>
#include <cstdlib>
#include "binaryTree.cpp"
using namespace std;


int main()
{
	const int N = 7;
	string A[N] = {"Eve", "Ann", "Alice", "John", "Mary", "Jack", "Bob" };
	string B[N] = {"123", "111", "231", "555", "444", "222", "333"};
	string x; string d;
	binaryTree<string, string> BST;
	cout << "Constructing empty BST\n";
	cout << "BST " << (BST.empty() ? "is" : "is not") << " empty\n";
	cout << "Traversing\n";
	BST.traverse();
	for(int i = 0; i<N; i++)
			if(BST.insert(A[i], B[i])) cout << A[i] <<" is inserted\n";
	
	cout << "BST " << (BST.empty() ? "is" : "is not") << " empty\n";
	cout << "Traversing\n";
	BST.traverse();
	cout << "Searching\n";
	x = "Eve";
	cout << x << (BST.search(x) ? " is" : " is not") << " found\n";
	x = "Bill";
	cout << x << (BST.search(x) ? " is" : " is not") << " found\n";
	cout << "Graphical Output\n\n";
	BST.graph();
	cout << endl;
	x = "Mary";
	cout << "Retrieving data part of " << x; 
	if (BST.retrieve(x, d)) cout <<" = " << d; 
	cout << endl;
	cout << "Removing " << x << endl;
	BST.remove(x);
	cout << "Graphical Output\n\n";
	BST.graph();
	cout << endl;
	x = "John";
	cout << "Removing " << x << endl;
	BST.remove(x);
	cout << "Graphical Output\n\n";
	BST.graph();
	cout << endl;
	x = "Eve";
	cout << "Removing " << x << endl;
	BST.remove(x);
	cout << "Graphical Output\n\n";
	BST.graph();
	cout << endl;
	cout << "Traversing\n";
	BST.traverse();
	system("pause");
	return 0;
}

