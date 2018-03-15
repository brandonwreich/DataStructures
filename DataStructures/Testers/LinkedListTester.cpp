//
//  LinkedListTester.cpp
//  DataStructures
//
//  Created by Reich, Brandon on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "LinkedListTester.hpp"

void LinkedListTester :: testListBasics()
{
    // Initalize data members
    LinkedList<int> numbers;
    
    // Add 9 to the end of the list
    numbers.add(9);
    
    // Prints the front and end
    cout << numbers.getFront() -> getData() << " is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd() -> getData() << " is at the end of the list and should be 9" << endl;
    
    // Add 0 to the end of the list
    numbers.add(0);
    
    // Prints front and end
    cout << numbers.getFront() -> getData() << " is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd() -> getData() << " is at the end of the list and should be 0" << endl;
    
    // Add 2 at index 1 and 324 to the end of the list
    numbers.addAtIndex(1,2);
    numbers.add(324);
    
    // Prints the front and end
    cout << numbers.getFront() -> getData() << " is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd() -> getData() << " is at the end of the list and should be 324" << endl;
    
    cout << "This loop should print 4 lines" << endl;
    
    // Loop to print the list
    for (int  index = 0; index < numbers.getSize(); index++)
    {
        cout << numbers.getFromIndex(index) << endl;
    }
    
    // Removes number at index 0
    numbers.remove(0);
    
    // Addes 32567 to the end of the list and 2312 at the front of the list
    numbers.add(32567);
    numbers.addAtIndex(0, 2312);
    
    // Prints the front and end
    cout << numbers.getFront() -> getData() << " is at the front of the list and should be 2312" << endl;
    cout << numbers.getEnd() -> getData() << " is at the end of the list and shold be 32567" << endl;
}

void LinkedListTester :: testListWithData()
{
    // Iniatlize data members
    Timer listTimer;
    
    // Start timer
    listTimer.startTimer();
    
    // Read the crime stats
    LinkedList<CrimeData> crimes = FileController :: readDataToList("/Users/brei8876/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
    
    // Stop timer
    listTimer.stopTimer();
    
    // Display information
    cout << "This is how long it took to read the structure into our custom data structure" << endl;
    listTimer.displayInformation();
    
    // Reset timer
    listTimer.resetTimer();
    cout << "Here is how long it takes to access a random data value" << endl;
    
    // Start timer
    listTimer.startTimer();
    
    // Initalize data members
    int randomLocation = (rand() * rand()) % crimes.getSize();
    
    // Grab a random stat
    cout << "The random index is " << randomLocation << endl;
    double totalViolentRate = crimes.getFromIndex(randomLocation).getAllViolentRates();
    
    // Stop timer
    listTimer.stopTimer();
    
    // Display information
    cout << "The random crime stat is: " << totalViolentRate << " and here is the time" << endl;
    listTimer.displayInformation();
    
}
