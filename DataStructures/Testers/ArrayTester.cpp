//
//  ArrayTester.cpp
//  DataStructures
//
//  Created by Reich, Brandon on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "ArrayTester.hpp"

void ArrayTester :: testArrayUse()
{
    Array<int> firstArray(10);
    
    for (int index = 0; index < 10; index++)
    {
        firstArray.setAtIndex(index, index);
    }
    
    for (int index= 0; index < firstArray.getSize(); index++)
    {
        cout << firstArray[index] << endl;
    }
}

void ArrayTester :: testAdvancedArray()
{
    
}
