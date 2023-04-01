#pragma once
#include"Node.h"

#ifndef STACK_ADT_
#define STACK_ADT_

template<typename T>
class StackADT
{
public:
    /** checks whether this stack is empty.
     @return  True if the stack is empty, or false if not. */
    virtual bool isEmpty() const = 0;

    /** Adds a new entry to the top of this stack.
     @post  If the operation was successful, newEntry is at the top of the stack.
     @param newEntry  The object to be added as a new entry.
     @return  True if the addition is successful or false if not. */
    virtual bool push(T newEntry)  = 0;
    virtual bool pop() = 0;
    virtual T peek() = 0;

   
}; // end StackADT
#endif