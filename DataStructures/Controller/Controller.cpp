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
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Print to the screen some text" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    codeTimer.resetTimer();
    codeTimer.startTimer();
    for (int index = 0; index < 999999; index++)
    {
        cout << "The index is " << index << "\t";
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
