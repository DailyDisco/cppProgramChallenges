//
//  main.cpp
//  Programming Assignment Chapter 4
//
//  Created by Diego Espino on 9/16/21.
//

#include <iostream>
using namespace std;

int main() {
   
    //setting up a variable type char named letter so that we may later receive user input for it.
    char letter;
    
    //Asks the user for an uppercase letter.
    cout << "Please enter an letter." << endl;
    
    //Takes the user input and assigns the value to letter.
    cin >> letter;
    letter = toupper(letter);
    

    
    
    //Begins a series of if else statements
    //each if statement includes the letters that corresponding to a given keypad
    //The input is echo'd then the keypad number is announced.
    if (letter >= 'A' && letter < 'Z' && letter != 'Q')
    {
        
        if (letter <= 'L') // if letter is a to l
           {
                
               if (letter <= 'F')
               {
                    
                  if (letter <= 'C')
                  {
                      cout << "The letter corresponds to number 2" << endl;
                  }
                   
                   else
                       cout << " The letter corresponds to number 3" << endl;
                }
               
               else
               {
                   if (letter <= 'I')
                   {
                       cout << "The letter corresponds to the number 4." << endl;
                   }
                   else
                       cout << "The letter corresponds to the number 5." << endl;
                
               }
            }
            
        else
        {
           if (letter <= 'S')
           {
               if (letter <= 'O')
               {
                   
               
                   cout << "The letter corresponds to the number 6." << endl;
               }
               else
                   cout << "The letter corresponds to the number 7." << endl;

           }
            
            else
            {
                if (letter <= 'V'){
                    cout << "The letter corresponds to the number 8." << endl;
                }
                else
                    cout << "The letter corresponds to the number 9." << endl;
            }
        }
    }
    
    else
        cout << " The input... " << letter << " is an error." << endl;
    
    
    cout << "\nTerminating Diego Espino \n";
    return 0;
}
