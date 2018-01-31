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
 
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/brei8876/Documents/Data Structures/DataStructures/DataStructures/Data/CrimeData.cpp");
    
    for( int loop = 0; loop < 30; loop++)
    {
        cout << "Spot # " << loop << ": " << myData[loop] << endl;
    }
}
