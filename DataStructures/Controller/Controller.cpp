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
    ArrayTester myTest;
    myTest.testArrayUse();
    myTest.testAdvancedArray();
    
//    cout << "Testing the Timer class" << endl;
//    Timer codeTimer;
//    codeTimer.startTimer();
//
//    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/brei8876/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
//
//    for( int loop = 0; loop < 100; loop++)
//    {
//        cout << "Spot # " << loop << ": " << myData[loop] << endl;
//    }
//
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
    
//    findMaxAndMin();
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
