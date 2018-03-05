//
//  RecursionTester.cpp
//  DataStructures
//
//  Created by Reich, Brandon on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if (number == 0 || number == 1)
    {
        cout << "Reached the base case" << endl;
        return 1;
    }
    else
    {
        cout << "Calling fib with" << number - 1 << " and " << number - 2 << endl;
        return fib (number - 1) + fib (number - 2);
    }
}

string RecursionTester :: mystery(string word)
{
    return "";
}

void RecursionTester :: testRecursionNumbers()
{
    // Initalize data members
    Timer recursionTimer;
    
    cout << "Testing fibonacci with 10" << endl;
    
    // Starts the timer
    recursionTimer.startTimer();
    
    // Tests fib with 10
    cout << fib(10) << endl;
    
    // Stops the timer and displays the information
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}

void RecursionTester :: testRecusionString()
{
    
}
