//
//  Timer.cpp
//  DataStructures
//
//  Created by Reich, Brandon on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Timer.hpp"

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

/**
 This method resets the timer back to 0
 */
void Timer :: resetTimer()
{
    executionTime = 0;
}

/**
 This method starts the timer
 */
void Timer :: startTimer()
{
    executionTime = clock();
}

/**
 This method stops the timer
 */
void Timer :: stopTimer()
{
    assert(executionTime != 0);
    executionTime = clock() - executionTime;
}

/**
 This method displays the information such as how long it took to complete
 the task it was supposed to do
 */
void Timer :: displayInformation()
{
    cout << "The execution time is: " << executionTime << endl;
    cout << "In human time it is " << double (executionTime)/CLOCKS_PER_SEC << " seconds" << endl;
}

/**
 This method returns the time
 */
long Timer :: getTimeInMicroseconds()
{
    return executionTime;
}
