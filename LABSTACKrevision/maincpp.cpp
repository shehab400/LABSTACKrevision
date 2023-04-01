#include<iostream>
#include"linkedlist.h"
#include"stack.h"
#include"stackADT.h"
#include"linkedqueue.h"
using namespace std;
int main()
{
	using namespace std;
	Linkedlist<int> L;	//create an object of class LinkedList
	int val;

	cout << "\nPlease enter int values to add to the list (-1 to stop):\n";
	cin >> val;
	while (val != -1)
	{
		L.add(val);
		cin >> val;
	}
	L.PrintList();
	cout << L.isempty();
	cout << "\n*****************\n";
	linkedstack<int>s;
	int val1;
	cin>>val1;
	while (val1!=-1)
	{
		s.push(val1);
		cin >> val1;
		
	}
	/*for (int i = 0; i < 5; i++)
	{
		s.push(i);
	}*/
	s.PrintList();
	s.pop();
	s.PrintList();
	cout << s.peek();
	cout << "\n**********************\n";
	Linkedqueue<int>q1;
	int val2;
	cin >> val2;
	while (val2 != -1)
	{
		q1.enqueue(val2);
		cin >> val2;

	}
	q1.printqueue();
	cout << "\n";
	q1.dequeue();
	q1.printqueue();
	
	
}

