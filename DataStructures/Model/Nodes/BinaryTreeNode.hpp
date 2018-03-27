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
#include <assert>

template <class Type>
class BinaryTreeNode
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    BinaryTreeNode<Type> * getRoot;
    BinaryTreeNode<Type> * getLeft;
    BinaryTreeNode<Type> * getRight;
    
    void setRoot(BinaryTreeNode<Type> * root);
    void setLeft(BinaryTreeNode<Type> * left);
    void setRight(BinaryTreeNode<Type> * right);
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    this -> root = nullptr;
    this -> left = nullptr;
    this -> right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    this -> root = nullptr;
    this -> left = nullptr;
    this -> right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRoot()
{
    return root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeft()
{
    return left;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRight()
{
    return right;
}

template <class Type>
void BinaryTreeNode<Type> :: setRoot(BinaryTreeNode<Type> * root)
{
    this -> root = root;
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
