//
//  FileController.cpp
//  DataStructures
//
//  Created by Reich, Brandon on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    // If the files exists at that path
    if (dataFile.is_open())
    {
        // Keep reaing until you are at the end of the file
        while (!dataFile.eof())
        {
            // Grab each line from the CSV sperated by the carriage return character
            getline(dataFile, currentCSVLine, '\n');
            
            // Exclude header row
            if (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    // Create a CrimeData instance from the line
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            
            rowCount++;
        }
        
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}
