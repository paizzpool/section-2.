#include <iostream>
#include <iomanip>

using namespace std;

int readInt(const string& prompt) {
    int value;
    while (true) {
        cout << prompt; //Display the provided prompt
        cin >> value; //Read user input

        //Check if input is invalid
        if (cin.fail()) {
            cin.clear(); //Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clear buffer
            cout << "Invalid input. Please enter a number." << endl; //Display error message
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clear buffer 
            return value; //Return the valid input value
        }
    }
}