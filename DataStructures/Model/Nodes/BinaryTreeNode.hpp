//
//  BinaryTreeNode.hpp
//  DataStructures
//
//  Created by Reich, Brandon on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include "Node.hpp" 

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftNode();
    BinaryTreeNode<Type> * getRightNode();
    
    void setRoot(BinaryTreeNode<Type> * root);
    void setLeft(BinaryTreeNode<Type> * left);
    void setRight(BinaryTreeNode<Type> * right);
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this -> root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
    return this -> left;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this -> right;
}

template <class Type>
void BinaryTreeNode<Type> :: setRoot(BinaryTreeNode<Type> * newRoot)
{
    root = newRoot;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeft(BinaryTreeNode<Type> * left)
{
    this -> left = left;
}

template <class Type>
void BinaryTreeNode<Type> :: setRight(BinaryTreeNode<Type> * right)
{
    this -> right = right;
}

#endif /* BinaryTreeNode_hpp */
