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
    // If the number equals 0 or 1
    if (number == 0 || number == 1)
    {
        //        cout << "Reached the base case" << endl;
        return 1;
    }
    // If the number does not equal 0 or 1
    else
    {
        //        cout << "Calling fib with" << number - 1 << " and " << number - 2 << endl;
        return fib (number - 1) + fib (number - 2);
    }
}

string RecursionTester :: mystery(string word)
{
    // If the word is 1 character long
    if (word.length() == 1)
    {
        return word;
    }
    // If the word is more than 1 character long
    else
    {
        return word + mystery(word.substr(0, word.length() - 1));
    }
}

void RecursionTester :: testRecursionNumbers()
{
    // Initalize data members
    Timer recursionTimer;
    
    cout << "Testing fibonacci with 100" << endl;
    
    // Starts the timer
    recursionTimer.startTimer();
    
    // Tests fib with 100
    cout << fib(100) << endl;
    
    // Stops the timer and displays the information
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}

void RecursionTester :: testRecusionString()
{
    cout << mystery("x") << endl;
    cout << mystery("apple") << endl;
}
