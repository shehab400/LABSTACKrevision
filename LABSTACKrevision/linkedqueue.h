#pragma once
#include"Node.h"
#include"QueueADT.h"
#include<iostream>
using namespace std;
template<class T>
class Linkedqueue :public QeueADT<T>
{
	Node<T>* front;
	Node<T>* back;
public:	
	Linkedqueue()
	{
		front = nullptr;
		back = nullptr;
	}
	bool isempty()
	{
		if (!front)
		{
			return true;
		}
		return false;
	}
	bool enqueue(T newitem)
	{
		Node<T>* p = new Node<T>;
		Node<T>* temp = new Node<T>;
		if (isempty())
		{
			p->setitem(newitem);
			front = p;
			back = p;
			return true;
		}
		p->setitem(newitem);
		temp = back;
		back = p;
		temp->setnext(back);
			return true;
		
	}
	bool dequeue()
	{
		if (isempty())
			return false;
		Node<T>* deletenode = front;
		front = front->getnext();
		delete deletenode;
	}
	T peek()
	{
		if (isempty())
		{
			return -1;
		}
		return front->getitem();
	}
	void printqueue()
	{
		Node<T>* p = front;
		
		if (isempty())
		{
			cout << "queue is empty";
		}
		while (p)
		{
			cout << p->getitem() << " ";
			p = p->getnext();
		}
	}
};

