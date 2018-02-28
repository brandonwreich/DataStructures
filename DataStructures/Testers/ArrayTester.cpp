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
    // Initalize array
    Array<int> firstArray(10);
    
    // Fill the array
    for (int index = 0; index < 10; index++)
    {
        firstArray.setAtIndex(index, index);
    }
    
    // Print the array
    for (int index = 0; index < firstArray.getSize(); index++)
    {
        cout << firstArray[index] << endl;
    }
    
    // Initalize 2nd array
    Array<int> secondArray(400);
    
    // Print the sizes of the arrays
    cout << secondArray.getSize() << endl;
    cout << firstArray.getSize() << endl;
    
    // Intialize 3rd array
    Array<int> thirdArray(secondArray);
    
    // Print  3rd array size
    cout << thirdArray.getSize() << endl;
    
    firstArray = thirdArray;
    
    // Prints the 4th index of the 1st array
    cout << firstArray[4] << endl;
    
    // Adds 123 to the 5th index in the 3rd array and prints it
    thirdArray[5] = 123;
    cout << thirdArray[5] << endl;
}

void ArrayTester :: testAdvancedArray()
{
    // Initalize data members
    Array<int> array(912);
    
    // Add numbers to the list
    for (int index = 0; index < 912; index++)
    {
        array.setAtIndex(index, index);
    }
    
    // Print the list
    for (int index = 0; index < array.getSize(); index++)
    {
        cout << array[index] << '\t';
    }
}
