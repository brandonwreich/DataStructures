//
//  TestingStacksAndQueues.cpp
//  DataStructures
//
//  Created by Reich, Brandon on 2/26/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "TestingStacksAndQueues.hpp"

void TestingStacksAndQueues :: stackVersusList()
{
    // Initalize data members
    Stack<int> numberStack;
    LinkedList<int> numberList;
    Timer stackTimer, listTimer;
    
    // Add 10 numbers into the list
    for (int index = 0; index < 10; index++)
    {
        numberStack.add(index);
        numberList.add(index);
    }
    
    cout << "Get the third from the last item from the structure" << endl;
    
    // Assign variables
    int index = 0;
    int value = -99;
    
    // Start timer
    stackTimer.startTimer();
    
    // Obtain the 3rd from last number
    while (index < 7)
    {
        cout << numberStack.pop() << endl;
        
        // Add one to index
        index++;
    }
    
    // Stop timer
    stackTimer.stopTimer();
    
    // Reasign varibles
    index = 0;
    
    // Start timers
    listTimer.startTimer();
    
    // Obtain the 3rd from last value
    value = numberList.getFromIndex(7);
    
    // Stop timer
    listTimer.stopTimer();
    
    // Display timer information
    cout << "The time it took to work with Stack: " << endl;
    stackTimer.displayInformation();
    
    // Display timer information
    cout << "The time it tood to work with List: " << endl;
    listTimer.displayInformation();
    
    cout << "What is left in the Stack" << endl;
    
    // Here is how to cast as a parent type to ge access
    // to a method that is not defined in the subclass
    
    // Grabs the stack size and prints it
    LinkedList<int> * listVersion = &numberStack;
    int stackSize = listVersion -> getSize();
    cout << "Stack size is: " << stackSize << endl;
    
    // Loop to print whats left in the stack
    for (int index = 0; index < stackSize; index++)
    {
        cout << numberStack.pop() << endl;
    }
    
    cout << "What is left in the List" << endl;
    
    // Here is how to cast as a parent type to ge access
    // to a method that is not defined in the subclass
    
    // Grabs the list size and prints it
    int listSize = numberList.getSize();
    cout << "List size is: " << listSize << endl;
    
    // Loop to print whats left in the list
    for (int index = 0; index < listSize; index++)
    {
        cout << numberList.getFromIndex(index) << "\t" << endl;
    }
}

void TestingStacksAndQueues :: stackVersusQueue()
{
    
}

void TestingStacksAndQueues :: queueVersusList()
{
    
}
