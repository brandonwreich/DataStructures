//
//  CircularList.hpp
//  DataStructures
//
//  Created by Reich, Brandon on 2/26/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include "List.hpp"
#include "../..//Nodes/DoubleNode.hpp"

template <class Type>
class CircularList : public List<Type>
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    Double Node<Type> * findNode(int index)
public:
    // Constructor
    CircularList();
    
    // Destructor
    ~CircularList();
    
    // Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type getFromIndex(int index);
    int getSize() const;
};

template <class Type>
CircularList<Type> :: CircularList()
{
    front -> setPrevious(end);
    front -> setNext(end);
    
    end -> setPrevious(front);
    end -> setNext(front);
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<type> * current = front;
    while (this -> front != nullptr)
    {
        front = front -> getNext();
        delete current;
        current = front;
    }
}

template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    assert (index >= 0 && index < this -> size);
    DoubleNode<Type> * nodeToFind;
    
    if(index < this -> size/2)
    {
        nodeToFind = this -> front;
        for (int postion = 0; postion < index; postion++)
        {
            nodeToFind = nodeToFind -> getNext();
        }
    }
    else
    {
        nodeToFind= this -> end;
        for (int position = this -> size - 1; postion >= index; postion--)
        {
            nodeToFind = nodeToFind -> getPrevious();
        }
    }
    
    return nodeToFind;
}

template <class Type>
Void CircularList<Type> :: add(Type item)
{
    DoubleNode<Type> * addedNode;
    if (this -> size == 0)
    {
        addedNode = new DoubleNode<Type>(item);
        this -> front = addedNode;
    }
    else
    {
        addedNode = new DoubleNode<Type>(item, this -> end, this -> front);
        this -> end -> setNext(addedNode)
    }
    
    this -> end = addedNode;
    this -> size++;
}

template <class Type>
void CircularList<Type> :: addAtIndex(int index, Type item)
{
    assert (index >= 0 && index <= this -> size);
    
    DoubleNode<Type> * next;
    DoubleNode<Type> * previous;
    DoubleNode<Type> * addMe;
    
    if (index < this -> size)
    {
        next = findNode(index);
        previous = next -> getPrevious();
    }
    else if (index == this -> size)
    {
        next = this -> front;
        previous = this -> end;
    }
    
    addMe = new DoubleNode<Type>(item, previous, next);
    
    if (index == 0)
    {
        this -> front = addMe;
    }
    else if (index == this -> size)
    {
        this -> end = addMe;
    }
    
    previous -> setNext(addMe);
    next -> setPrevious(addMe);
    
    this -> size++;
}

template <class Type>
Type CircularList<Type> :: getFromIndex(int index)
{
    assert (index >= 0 && index < this -> size);
    DoubleNode<Type> * holder = findNode(index);
    return holder -> getData();
}

template <class Type>
Type CircularList<Type> :: remove(int index)
{
    assert (index >= 0 && index < this -> size);
}

#endif /* CircularList_hpp */
