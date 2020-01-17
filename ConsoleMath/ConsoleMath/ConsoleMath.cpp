/***********************************************************************
 * COMPONENT:
 *    ConsoleMath
 * Author:
 *    Adam Miller
 * Summary:
 *    ConsoleMath.cpp : This file contains the 'main' function. Program 
 *    execution begins and ends there.
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include "InputControl.h"
#include "BasicMath.h"
#include "BasicAlgebra.h"
void displayMainOptions();
void displayAbout();

using namespace std;

int main()
{
    cout << "Hello, and welcome to Console Math!\n";
    displayMainOptions();

    return 0;
}

void displayMainOptions()
{
   unsigned int option = 0;

   do
   {
      cout << "What math would you like to do?\n";
      cout << "\t1:  " << "Basic Math\n";
      cout << "\t    " << "Algebra\n";
      cout << "\t    " << "Geometry\n";
      cout << "\t    " << "Triginometry\n";
      cout << "\t    " << "Polynomials and Series\n";
      cout << "\t    " << "Vectors\n";
      cout << "\t    " << "Calculus\n";
      cout << "\t    " << "Kinematics\n";

      cout << "\t42: " << "About\n";      
      cout << "\t0:  " << "Exit\n";

      string message = "Please enter choice";
      option = getUnsignedInt(message);
      
      switch (option)
      {
      case 0:
         break;
      case 1:
         //cout << "Basic Math options\n";
          displayBasicMathOptions();
         break;
      case 2:
         cout << "Algebra options\n";
         break;
      case 3:
         cout << "Geometry options\n";
         break;
      case 4:
         cout << "Trig options\n";
         break;
      case 42:
         displayAbout();
         break;
      case 999:
         cout << "Invalid input!\n";
         cout << "Please enter whole numbers only\n";
         break;
      default:
         cout << "Invalid option!\n\n";
         // jump to input rather than displaying again
      }

     // std::cout << std::endl << std::endl;
      printf("\033c"); // clears the console

   } while (option != 0);
}

void displayAbout()
{
   cout << "This is the about. who knew?\n";

   cout << endl;

   continueQuestion();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
