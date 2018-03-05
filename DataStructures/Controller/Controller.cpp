//
//  Controller.cpp
//  DataStructures
//
//  Created by Reich, Brandon on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    
}

void Controller :: testArray()
{
    ArrayTester myTest;
    myTest.testArrayUse();
    myTest.testAdvancedArray();
}

void Controller :: testLinkedList()
{
    LinkedListTester listTest;
    listTest.testListBasics();
    listTest.testListWithData();
}

void Controller :: testStackAndQueues()
{
    TestingStacksAndQueues test;
    test.stackVersusList();
    test.stackVersusQueue();
    test.queueVersusList();
}

void testRecursion()
{
    RecursionTester recursionTest;
    recursionTest.testRecursionNumbers();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/brei8876/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if(myData[minIndex] > myData[index])
        {
            minIndex = index;
        }
        
        if(myData[maxIndex] < myData[index])
        {
            maxIndex = index;
        }
    }
    
    searchTimer.stopTimer();
    
    cout << "The smallest Crime stat is at index " << minIndex << " and it is at the " << myData[minIndex].getDepartment() << " with a crime rate of " << myData[minIndex].getAllViolentRates() << endl;
    cout << "The largest Crime stat is at index " << maxIndex << " and it is at the " << myData[maxIndex].getDepartment() << " with a crime rate of " << myData[maxIndex].getAllViolentRates() << endl;
    
    searchTimer.displayInformation();
    
    //cout << "\n" << endl;
}
