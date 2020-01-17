/***********************************************************************
 * COMPONENT:
 *    Input Control
 * Author:
 *    Adam Miller
 * Summary:
 *    Contains the code for promptin the user for input and handling user
 *    input
 ************************************************************************/

#include "InputControl.h"
#include <iostream>
#include <cfenv>

using namespace std;

/***************************************************
* ContinueQuestion
* Prompts the user if they would like to continue.
* continues to prompt until user types y
****************************************************/
bool continueQuestion()
{
   char pause;
   do
   {
      cout << "Continue? (y/n): ";
      cin >> pause;

      // clear buffer before accepting a new line, so only one char is accepted
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
   } while (tolower(pause) != 'y');

   return true;
}

/***************************************************
* AgainQuestion
* asks the user if they would like to do an activity
* again. Returns  true with y and false with n
****************************************************/
bool againQuestion()
{
    char again;

    againInput:
    cout << "Would you like to do this function again? (y/n): ";
    cin >> again;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (tolower(again) == 'y')
        return true;
    else if (tolower(again == 'n'))
        return false;
    else
    {
        cout << "Invalid input!\n";
        goto againInput;
    }
}

/***************************************************
*
*
****************************************************/
unsigned int getUnsignedInt(string message)
{
    long long userInput = 0;

    unsignedIntInput:
    cout << message << ": ";
    cin >> userInput;

    // if input fails
    if (cin.fail() || userInput > numeric_limits<unsigned int>::max() || userInput < 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input!\n";
        cout << "Please enter a whole number less than "
            << numeric_limits<unsigned int>::max()
            << " and greater than 0"
            << endl << endl;
        goto unsignedIntInput;
    }

    // ignore any extraneous input
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return (unsigned int) userInput;
}

/***************************************************
*
*
****************************************************/
long long getLong(string message)
{
    long long userInput = 0;

    longInput:
    cout << message << ": ";
    cin >> userInput;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input!\n";
        cout << "Please enter an integer less than "
            << numeric_limits<long long>::max()
            << " and greater than "
            << numeric_limits<long long>::min()
            << endl << endl; 
        goto longInput;
    }

    // ignore any extraneous input
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return userInput;
}

/***************************************************
*
*
****************************************************/
double getDouble(string message)
{
    double userInput = 0;

    doubleInput:
    cout << message << ": ";
    cin >> userInput;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input!\n";
        cout << "Please enter a number less than "
            << numeric_limits<double>::max()
            << " and greater than "
            << numeric_limits<double>::min()
            << endl << endl;
        goto doubleInput;
    }

    return userInput;
}

list<double> * getOperands()
{
    unsigned int numOperands = getUnsignedInt("How many operands would you like? ");
    list<double> * operands = new list<double>();

    for (int i = 0; i < numOperands; i++)
    {
        string message = "Operand " + to_string(i + 1);
        operands->push_back(getDouble(message));
    }

    return operands;
}
