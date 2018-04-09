//
//  Array.hpp
//  DataStructures
//
//  Created by Reich, Brandon on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    // Contructor
    Array<Type>(int size);
    
    // Copy constructor
    Array<Type>(const Array<Type> & toCopy);
    
    // Destructor
    // How you take memory away from an object
    ~Array<Type>();
    
    // Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    // Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};

/**
 Constructor that takes an int as a parameter
 */
template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this -> size = size;
    
    internalArray = new Type[size];
}

template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
    this -> size = toCopy.getSize();
    
    // Build data structure
    internalArray = new Type[size];
    
    for (int index = 0; index < size; index++)
    {
        internalArray[index] = toCopy[index];
    }
}

template <class Type>
Array<Type> :: ~Array()
{
    cout << "About to delete the structure" << endl;
    
    // Deletes the array
    delete [] internalArray;
    
    cout << "Interal array deleted" << endl;
}

template <class Type>
Array<Type> & Array<Type> :: operator = (const Array<Type> & toAssign)
{
    if (&toAssign != this)
    {
        if (size != toAssign.getSize())
        {
            delete [] internalArray;
            size = toAssign.getSize();
            internalArray = new Type [size];
        }
        
        for (int index = 0; index < size; index++)
        {
            internalArray[index] = toAssign[index];
        }
    }
    return * this;
}

template <class Type> // Left hand of = sign -- assigns to reference
Type & Array<Type> :: operator [] (int index)
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

template <class Type> // Right hand of = sign -- copy
Type Array<Type> :: operator [] (int index) const
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

/** Gets the size of the array and returns it */
template <class Type>
int Array<Type> :: getSize() const
{
    return size;
}

/** Gets the object stored at the index and returns it */
template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    Type value = internalArray[index];
    return value;
}

template <class Type>
void Array<Type> :: setAtIndex(int pos, Type item)
{
    assert(pos >= 0 && pos < size);
    internalArray[pos] = item;
}

#endif /* Array_hpp */
