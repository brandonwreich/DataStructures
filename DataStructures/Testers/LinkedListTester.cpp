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
    LinkedList<int> numbers;
    
    numbers.add(9);
    cout << numbers.getFront() -> getData() << " is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd() -> getData() << " is at the end of the list and should be 9" << endl;
    
    numbers.add(0);
    cout << numbers.getFront() -> getData() << " is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd() -> getData() << " is at the end of the list and should be 0" << endl;
    
    numbers.addAtIndex(1,2);
    numbers.add(324);
    cout << numbers.getFront() -> getData() << " is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd() -> getData() << " is at the end of the list and should be 324" << endl;
    
    cout << "This loop should print 4 lines" << endl;
    for (int  index = 0; index < numbers.getSize(); index++)
    {
        cout << numbers.getFromIndex(index) << endl;
    }
    
    numbers.remove(0);
    numbers.add(32567);
    numbers.addAtIndex(0, 2312);
    
    cout << numbers.getFront() -> getData() << " is at the front of the list and should be 2312" << endl;
    cout << numbers.getEnd() -> getData() << " is at the end of the list and shold be 32567" << endl;
}
