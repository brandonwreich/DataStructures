//
//  Runner.cpp
//  DataStructures
//
//  Created by Reich, Brandon on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.

#include "Controller/Controller.hpp"

int main()
{
    int sample = 7;
    string word = "asda";
    string word2 = "adsa";
    cout << &sample << endl;
    cout << &word << endl;
    cout << &word2 << endl;
    unsigned long address = (unsigned long) &sample;
    cout << address << endl;
    
//    Controller app;
//    app.start();

    return 0;
}
