//
//  Hashtable.hpp
//  DataStructures
//
//  Created by Reich, Brandon on 4/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include "../Node/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    long getSize();
    void resize();
    long findPosition(HashNode<Type> * insert);
    long handleCollision(HashNode<Type> * current, long index);
public:
    Hashtable();
    ~Hashtable();
    
    void insert(Type value);
};

template <class Type>
Hashtable<Type> :: Hashtable()
{
    capacity = 101;
    internalStorage = new HashNode<Type>[capacity];
    size = 0;
    loadFactor = .80;
}

template <class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}

template <class Type>
long Hashtable<Type> :: isPrime(long currentNumber)
{
    return false;
}

template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: handleCollision(HashNode<Type> * current, long index)
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: getNextPrime()
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: getSize()
{
    return this -> size;
}

template <class Type>
void Hashtable<Type> :: resize()
{
    long updatedCapacity = nextPrime();
    HashNode<Type> * * tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity = this -> capacity;
    this -> capacity = updatedCapacity;
    
    for (long index = 0; index < oldCapacity; index++)
    {
        if(hasTableStorage[index] != nullptr)
        {
            HashNode<Type> * temp = internalStorage[index];
            
            long position = findPosition(temp);
            if(tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollision(temp, position);
                if (updatedPosition != -1)
                {
                    tempStorage[updatedPosition] = temp;
                }
            }
        }
    }
    
    internalStorage = tempStorage;
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    
}

#endif /* Hashtable_hpp */
