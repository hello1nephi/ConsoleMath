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
void displayMainOptions();
void displayAbout();

using namespace std;

int main()
{
    cout << "Hello, and welcome to Console Math!\n";
    displayMainOptions();
}

void displayMainOptions()
{
   unsigned short option = 0;

   do
   {
      //printf("\033c"); // clears the console
      cout << "What math would you like to do?\n";
      cout << "\t1:  " << "Basic Math\n";
      cout << "\t2:  " << "Algebra\n";
      cout << "\t3:  " << "Geometry\n";
      cout << "\t4:  " << "Triginometry\n";
      cout << "\t    " << "Polynomials and Series\n";
      cout << "\t    " << "Vectors\n";
      cout << "\t    " << "Calculus\n";
      cout << "\t    " << "Kinematics\n";

      cout << "\t42: " << "About\n";      
      cout << "\t0:  " << "Exit\n";

      // marker for beginning of input
      input:
      cout << "Please enter choice: ";
      cin >> option;

      // check for failed input
      if (cin.fail())
      {
         cin.clear();
         cin.ignore();
         // set to invalid input option
         cout << "Invalid input!\n";
         cout << "Please enter whole numbers only\n\n";
         // jump to input beginning
         goto input;
      }
      
      switch (option)
      {
      case 0:
         break;
      case 1:
         cout << "Basic Math options\n";
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
         goto input;
      }

      std::cout << std::endl << std::endl;
   } while (option != 0);
}

void displayAbout()
{
   char pause = ' ';
   cout << "This is the about. who knew?\n";

   cout << endl;
   do
   {
      cout << "Continue? (y/n): ";
      cin >> pause;
   } while (tolower(pause) != 'y');
   
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
