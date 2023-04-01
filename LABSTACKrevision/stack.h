#pragma once
#include"Node.h"
#include"stackADT.h"
template<class T>
class linkedstack : public StackADT<T>
{
	Node<T>* top;
	int count;
public:
	linkedstack()
	{
		count = 0;
		top = nullptr;
	}
	bool isEmpty() const
	{
		if (!top)
		{
			return true;
		}
		return false;
	}
	bool push(T newEntry) 
	{
		Node<T>* p = new Node<T>(newEntry);
		if (isEmpty())
		{
			p->setitem(newEntry);
			p->setnext(nullptr);
			top = p;
			return true;
		}
		else
		{
			p->setnext(top);
			p->setitem(newEntry);
			top = p;
			return true;
		}
		return false;

	}
	bool pop()
	{
		if (isEmpty())
		{
			cout << "stack is empty";
			return -1;
		}
		else
		{
			Node<T>* temp = top;
			top = top->getnext();
			delete temp;
			return 1;
		}
		return -1;
	}

	void PrintList()	const
	{
		cout << "\nprinting list contents:\n\n";
		Node<T>* temp = top;
		while (temp)
		{
			cout << temp->getitem(); cout << "\n";
			temp = temp->getnext();
		}
	}

	T peek()
	{
		if (isEmpty())
		{
			return -1;
		}
		return top->getitem();
	}
};

