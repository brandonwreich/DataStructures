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
    cout << numbers.getEnd() -> getData() << "is at the end of the list and should be 9" << endl;
}
