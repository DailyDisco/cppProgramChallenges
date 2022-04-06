//
//  main.cpp
//  Program 1
//
//  Created by Diego Espino on 9/9/21.
//


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
    //Declaring the environments I'm using for the program

int main()
{
    cout << " ***** Part 1 ***** " << endl; // Title
    

        double num_1 = 2.34569, num_2 = 9.87653, num_3 = num_1 * num_2; // Declared variables
    

            cout << "The product of " << num_1 << " and " << num_2 << " is " << num_3 << "." << endl;

            cout << "The product of " << num_1 << " and " << num_2 << " is " << setprecision(11) << num_3 << "." << endl;

            cout << "The product of " << num_1 << " and " << num_2 << " is " << setprecision(14) << num_3 << "." << endl;

            cout << "The product of " << num_1 << " and " << num_2 << " is " << setprecision(4) << num_3 << "." << endl;
    
                // All these lines are used to output requested information with certain precisions.
                // However, for some reason setprecision(14) does not show 14 digits.
    
    

    cout << " ***** Part 2 ***** " << endl; // Title

        double b1, b2, b3, b4, b5, b6, b7, b8; // 8 variables
    

            cout << "Enter 8 numbers, decimals are okay. " << endl;
            cin >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7 >> b8;
                //Asks the user for and accepts 8 variables

            cout << setprecision(6) << "\t" << b1 << "\t" << b2 << "\t" <<b3 << "\t" << b4 << endl << "\t" << b5 << "\t" << b6 << "\t" << b7 << "\t" << b8 << endl;
                    // This is used to display all variables in a rows x column format and accepts numbers up to 6 digits.
    

    cout << " ***** Part 3 ***** " << endl; // Title

        int num_items;
        double price;
        const double tax = 0.08250;
            // Declared variables
    

            cout << "How many products did you purchase? " << endl;
            cin >> num_items;
                // Asks and accepts input for number of items which is a int because it must be a whole number.

            cout << "How much did each item cost? " << endl;
            cin.ignore();
            cin >> price;
                // Asks for price and receives user input for it as a double because it has decimals.
    
                
            double total_sales_tax = (num_items * price) * tax;
                // This calculates the resulting sales tax in a new variable so we may call upon this faster.
    

            cout << "The sales tax is " << fixed << setprecision(2) << total_sales_tax << "." << endl;
                // Displays the total sales tax with up to three numbers.
    

    cout << " ***** Part 4 ***** " << endl; // Title
    
        string full_name1;
        string full_name2;
            // Declares two string variables so that we may ask users for first and last names.

            cout << "First person, please enter your name. " << endl;
            cin >> full_name1;
                //Asks first user for first and last name.
    
            cout << "Then, second person, enter your name. " << endl;
            cin >> full_name2;
                //Asks second user for first and last name.
    
        
            cout << "Player 1's name is " << full_name1 << ". " << "Player 2's name is " << full_name2 << ". " << endl;
                // Displays the inputs from user 1 and user 2 in a descriptive sentence.
                // However, I am not to get the full first and last name to stay in full_name1 and I'm not able to begin accepting input for full_name2
    
    return 0;

}
