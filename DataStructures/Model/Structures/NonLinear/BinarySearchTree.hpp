//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Reich, Brandon on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * intStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void inset(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    this -> root = nullptr;
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this -> root;
    
    if (current == nullptr)
    {
        this -> root = insertMe;
    }
    else
    {
        while (current != nullptr)
        {
            previous = current;
            if(itemToInsert < current -> getData())
            {
                current = currrent -> getLeftNode();
            }
            else if(itemToInsert > current -> getData())
            {
                current = current -> getRightNode();
            }
            else
            {
                cerr << "Item exists already - Exiting insert" << endl;
                delete insertMe;
                return;
            }
        }
        
        if (previous -> getData() > itemToInsert)
        {
            previous -> setLeftNode(insertMe);
        }
        else
        {
            previous -> setRigthNode(insertMe);
        }
        
        insertMe -> setRootNode(previous)
    }
}

#endif /* BinarySearchTree_hpp */
