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
    // Initalize data members
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
            
            // Add one to row count
            rowCount++;
        }
        
        // Close the file
        dataFile.close();
    }
    // If the file does not exist
    else
    {
        // Print out the error
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

LinkedList<CrimeData> FileController :: readDataToList(string filename)
{
    // Initalize data members
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    // If the file exists at that path
    if(dataFile.is_open())
    {
        // Keep reading until you are at the end of the file
        while (!dataFile.eof())
        {
            // Grab each line from the CSV separated by the carrage return character
            getline(dataFile, currentCSVLine, '\n');
            
            // Exclude header row
            if (rowCount != 0)
            {
                // Create a CrimeData instance from the line. Exclude a blank line
                if (currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            
            // Add one to rowCount
            rowCount++;
        }
        
        // Close the file
        dataFile.close();
    }
    // If the file does not exist
    else
    {
        // Print the error
        cerr << "NO FILE" << endl;
    }
    
    return crimes;
}
