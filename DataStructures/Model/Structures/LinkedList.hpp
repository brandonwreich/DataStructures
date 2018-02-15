//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Reich, Brandon on 2/15/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "List.hpp"

using namespace std;

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    // Constructors
    LinkedList();
    
    // Destructor
    virtual ~LinkedList(); // Virtual so it can be overriden
    
    // Helper Methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    // Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
//    Type setAtIndex(int index, Type item);
//    bool contains(Type item);
}

template <class Type>
LinkedList<Type> :: LinkedList()
{
    this -> front = nullptr;
    this -> end = nullptr;
    this -> size = 0;
}

template <class Type>
LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure -> getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}

template <class Type>
void LinkedList<Type> :: add(Type item)
{
    Linear Node<Type> * newData = new LinearNode<Type>(item);
    
    if (this -> size == 0)
    {
        this -> front = newData;
    }
    else
    {
        this -> end -> setNextNode(newData);
    }
    
    this -> end = newData;
    this -> size += 1;
}

template <class Type>
void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this -> size);
    
    if(index == this -> size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        
        if(index == 0)
        {
            toBeAdded -> setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            for (int position = 0; position < index; position++)
            {
                previous = current;
                current = current -> getNextNode();
            }
            
            previous -> setNextNode(toBeAdded);
            toBeAdded -> setNextNode(current);
        }
        this -> size++;
    }
}

template <class Type>
Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this -> size);
    
    LinearNode<Type> * current = front;
    LinearNode<Type> * toBeRemoved = nullptr;
    LinearNode<Type> * previous = nullptr;
    
    Type removedData;
    
    if (index == 0)
    {
        toBeRemoved = front;
        this -> front -> getNextNode();
    }
    else
    {
        for (int position = 0; position < index; position++)
        {
            previous = current;
            current = current -> getNextNode();
        }
        
        toBeRemoved = current;
        
        if (index == this -> size - 1)
        {
            previous -> setNextNode(nullptr);
            end  = previous;
        }
        else
        {
            current = toBeRemoved -> getNextNode();
            previous -> setNextNode(current);
        }
    }
    this -> size -= 1;
    
    removedData = toBeRemoved -> getData();
    delete toBeRemoved;
    return removedData;
}

template <class Type>
LinearNode<Type> * LinedList<Type> :: getEnd()
{
    return this -> end;
}

template <class Type>
LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this -> front;
}

template <class Type>
LinearNode<type> * LinkedList<Type> :: getSize()
{
    return this -> size;
}

#endif /* LinkedList_hpp */