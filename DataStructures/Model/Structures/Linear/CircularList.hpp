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



#endif /* CircularList_hpp */
