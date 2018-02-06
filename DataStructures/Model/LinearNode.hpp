//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Reich, Brandon on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include "Node.hpp"
#include <iostream>

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
public:
    // Constructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    
    // Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

// CONSTRUCTORS

/**
 This constructor is used for building the raw structure before values are know
 */
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this -> next = nullptr;
}

/**
 This constructor is used to create a reference to an instance with data
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this -> next = nullptr;
}

/**
 This constructor is used to create a regerence to an instance with data and a know link
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this -> next = next;
}

// ACCESSOR METHODS

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this -> next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}

#endif /* LinearNode_hpp */
