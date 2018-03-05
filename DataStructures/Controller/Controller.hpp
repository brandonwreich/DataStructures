//
//  Controller.hpp
//  DataStructures
//
//  Created by Reich, Brandon on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "FileController.hpp"
#include "Tools/Timer.hpp"
#include "../Model/Structures/Linear/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "../Testers/LinkedListTester.hpp"
#include "../Testers/TestingStacksAndQueues.hpp"

#include <iostream>
#include <vector>

class Controller
{
private:
    void findMaxAndMin();
public:
    void start();
};
#endif /* Controller_hpp */
