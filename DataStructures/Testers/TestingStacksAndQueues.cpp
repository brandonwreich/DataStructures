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
    cout << "The time it took to work with List: " << endl;
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
    // Initalize crime data members
    vector<CrimeData> data = FileController :: readCrimeDataToVector("/Users/brei8876/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
    Stack<CrimeData> crimeStack;
    Queue<CrimeData> crimeQueue;
    
    // Fill with crime stats
    for (int index = 0; index < 100; index ++)
    {
        CrimeData temp = data.at(index);
        crimeStack.push(temp);
        crimeQueue.enqueue(temp);
    }
    
    // Initalize normal data members
    Queue<int> queue;
    Stack<int> stack;
    Queue<int> queueFromStack;
    Stack<int> stackFromQueue;
    
    // Fill with numbers
    for (int index = 0; index < 10; index ++)
    {
        queue.enqueue(index);
        stack.push(index);
    }
    
    // Loop through the stack/queue
    for (int index = 0; index < 10; index++)
    {
        // As the results are printed they are also removed
        cout << index << endl;
        cout << "Queue result: " << queue.dequeue() << endl;
        cout << "Stack result: " << stack.pop() << endl;
    }
    
    // Fill with numbers
    for (int index = 0; index < 10; index ++)
    {
        queue.enqueue(index);
        stack.push(index);
    }
    
    // Add the removed numbers to the appropiate stack/queue
    for (int index = 0; index < 10; index++)
    {
        stackFromQueue.push(queue.dequeue());
        queueFromStack.enqueue(stack.pop());
    }
    
    // Loop throught eh stack/queue
    for (int index = 0; index < 10; index++)
    {
        // Ass the results are printed they are also removed
        cout << index << endl;
        cout << "Stack result: " << stackFromQueue.pop() << endl;
        cout << "Queue result: " << queueFromStack.dequeue() << endl;
    }
}

void TestingStacksAndQueues :: queueVersusList()
{
    // Initalize data members
    Queue<string> wordQueue;
    LinkedList<string> wordList;
    
    // Add words into the queue
    wordQueue.add("first");
    wordQueue.add("second");
    wordQueue.add("third");
    wordQueue.add("fourth");
    wordQueue.add("fifth");
    
    // Add words into the list
    wordList.add("first");
    wordList.add("second");
    wordList.add("third");
    wordList.add("fourth");
    wordList.add("fifth");
    
    cout << "Queue: " << wordQueue.getFromIndex(0) << " versus List: " << wordList.getFromIndex(0) << endl;
    
    cout << "Here is the in order removal in a queue: " << endl;
    
    // Clear the queue
    wordQueue.clear();
    
    cout << "Here is a backwards order removel in a list: " << endl;
    
    // Clear the list
    for (int index = wordList.getSize() - 1; index >= 0; index--)
    {
        cout << wordList.remove(index) << endl;
    }
}
