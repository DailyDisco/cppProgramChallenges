//
//  main.cpp
//  Programming Assignment Quiz Module 5
//
//  Created by Diego Espino on 9/30/21.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    
    int id, stateSales;
    int totalSum = 0, totalCount = 0, stateSum = 0, stateCount =0;
    double stateAvg, stateTotalAvg;
    
    //I don't understand why it needs to be a 9 numeric variable... can we use something other than client_name?
    
    string city_name, stateId, trigger;
    
    //This specifies what file you are looking in for the data.
    
    ifstream inFile;
    inFile.open("Cty_Data.txt");
    
    //This prevents a infinite loop if the file fails.
    
    if(inFile.fail())
    {
        cout << "File error. " << endl;
        
        exit(1);
    }
    
    //To begin reading the first SET of data, you must set the trigger to detect ID changes
    
    inFile >> id >> city_name >> stateId >> stateSales;
    // infile >> id >> city >> state >> sales
    
    trigger = stateId;
    
    while ( !inFile.eof() )
        
    {
        totalSum = totalSum + stateSales;
        totalCount++;
        
        if ( trigger != stateId ) // checks if the id has changed and if it has it breaks the logic.
        {
            stateAvg = (double)stateSum/stateCount;
            
            cout << "\n ID = " << stateId << "\n Count " << stateCount << "\n Sum = " << stateSum << "\n Avg = " << stateAvg << endl;
            
            trigger = stateId; // this resets the trigger and zeros the variables
            stateSum = 0;
            stateCount = 0;
            
            // This is the end of break logic.
        }
        
        stateSum = stateSum + stateSales;
        stateCount++;
        
        inFile >> id >> city_name >> stateId >> stateSales; // this reads the next set of data
        
    }
    
    
    stateAvg = (double)stateSum/stateCount; // calculates the average
    
    cout << "\n ID = " << stateId << "\n Count = " << stateCount << "\n Sum = " << stateSum << "\n Avg = " << stateAvg << endl;
    
    // calculate the totals:
    
    // you have to cast double on to these ints to get floating point number
    stateTotalAvg = (double) totalSum / totalCount;
    
    cout << "\n\n Grand totals: *********************** \n Count = " << totalCount << "\n Sum = " << totalSum << "\n Avg = " << stateTotalAvg << endl;
    
    inFile.close();
    // one more break logic to exit the count
    // same as the break logic above however you do not need to zero the variables
    
    
    cout << "Terminating, Diego Espino" << endl;
    return 0;
}
