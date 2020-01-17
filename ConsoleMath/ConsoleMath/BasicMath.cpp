/***********************************************************************
 * COMPONENT:
 *    Basic MAth
 * Author:
 *    Adam Miller
 * Summary:
 *    Contains the code for basic math equations
 ************************************************************************/

#include "BasicMath.h"
#include "InputControl.h"
#include <iostream>
#include <list>
#include <cfenv>

using namespace std;

/***************************************************
*
*
****************************************************/
void displayBasicMathOptions()
{
    int choice = 0;
    do
    {
        cout << "\nBasic Math Options:\n"
            << "\t1: Additon\n"
            << "\t2: Subtraction\n"
            << "\t : Multiplication\n"
            << "\t : Division\n"
            << "\t : Integer Division\n"
            << "\t : Bitwise And\n"
            << "\t : Bitwise Or\n"
            << "\t : Bitwise XOR\n"
            << "\t0: Return\n";

        choice = getUnsignedInt("Please Enter Choice");
        cout << endl;

        switch (choice)
        {
        case 1:
            //cout << "Addition\n";
            addition();
            break;
        case 2:
            //cout << "Subtraction\n";
            subtraction();
            break;
        case 3:
            cout << "Multiplication\n";
            break;
        case 4:
            cout << "Division\n";
            break;
        case 5:
            cout << "Integer Division\n";
            break;
        case 6:
            cout << "Bitwise And\n";
            break;
        case 7:
            cout << "Bitwise OR\n";
            break;
        case 8:
            cout << "Bitwise XOR\n";
            break;
        case 0:
            cout << "Return\n";
            break;
        default:
            cout << "Invalid option!\n";
        }

    } while (choice != 0);
}

/***************************************************
*
*
****************************************************/
void addition()
{
    list <double> * operands = getOperands();
    double result = 0;

    for (list<double>::iterator it = operands->begin(); it != operands->end(); it++)
    {
        result += *it;
    }

    cout << "The result is: " << result << endl;

    if (fetestexcept(FE_OVERFLOW))
        cout << "Overflow detected!\n";
    if (fetestexcept(FE_UNDERFLOW))
        cout << "Underflow detected!\n";
    if (fetestexcept(FE_INVALID))
        cout << "Invalid result detected!\n";

    delete operands;
    operands = NULL;
    return;
}

/***************************************************
*
*
****************************************************/
void subtraction()
{
    list <double>* operands = getOperands();
    double result = 0;

    for (list<double>::iterator it = operands->begin(); it != operands->end(); it++)
    {
        // first operand is being subtracted from
        if (it == operands->begin())
        {
            result += *it;
        }
        else
        {
            result -= *it;
        }
    }

    cout << "The result is: " << result << endl;

    if (fetestexcept(FE_OVERFLOW))
        cout << "Overflow detected!\n";
    if (fetestexcept(FE_UNDERFLOW))
        cout << "Underflow detected!\n";
    if (fetestexcept(FE_INVALID))
        cout << "Invalid result detected!\n";

    delete operands;
    operands = NULL;
    return;
}
