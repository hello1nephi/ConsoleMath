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

using namespace std;

/***************************************************
*
*
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
*
*
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
    unsigned int userInput = 0;

    unsignedIntInput:
    cout << message << ": ";
    cin >> userInput;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input!\n";
        cout << "Please enter a whole number\n\n";
        goto unsignedIntInput;
    }
    return userInput;
}

/***************************************************
*
*
****************************************************/
long getLong(string message)
{
    long userInput = 0;

    longInput:
    cout << message << ": ";
    cin >> userInput;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input!\n";
        cout << "Please enter an integer\n\n";
        goto longInput;
    }

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
        cout << "Please enter an integer\n\n";
        goto doubleInput;
    }

    return userInput;
}