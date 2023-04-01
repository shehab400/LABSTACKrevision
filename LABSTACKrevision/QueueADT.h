#pragma once
#include"Node.h"
template<class T>
class QeueADT
{
public:	
	virtual bool enqueue(T newitem) = 0;
	virtual bool dequeue() = 0;
	virtual bool isempty() = 0;
	virtual T peek() = 0;
};
