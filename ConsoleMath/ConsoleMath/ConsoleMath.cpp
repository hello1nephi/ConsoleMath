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
void displayMainOptions();

int main()
{
    std::cout << "Hello, and welcome to Console Math!\n";
    displayMainOptions();
}

void displayMainOptions()
{
   unsigned int option = 0;

   do
   {
      std::cout << "What math would you like to do?\n";
      std::cout << "\tAlgebra: 1\n";
      std::cout << "\tTriginometry: 2\n";
      std::cout << "\tKinematics: 3\n";
      
      std::cout << "\tExit: 0\n";
      std::cin >> option;
      
      switch (option)
      {
      case 0:
         break;
      case 1:
         std::cout << "Algebra options\n";
         break;
      case 2:
         std::cout << "Trig options\n";
         break;
      case 3:
         std::cout << "Kinematics options\n";
         break;
      default:
         std::cout << "Invalid option!\n";
      }

      std::cout << std::endl << std::endl;
   } while (option != 0);
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
