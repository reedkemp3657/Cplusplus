#include <cstdlib>
#include <iostream>
#include "flash.h"

using namespace std;

int main(int argc, char *argv[])
{
//**** Declare variable cards of type flash
    char choice;   // user choice of operation
    
    
    cout << "Enter a (add), r (remove), p (print), q (quiz) or s (stop): ";
    cin >> choice;
    
    // continue processing commands until user wants to stop
    while (choice != 's')
    {
          if (choice == 'a')
//**** call add_problem to add a problem to cards
          else
          if (choice == 'r')
//**** call remove_problem to remove a problem from cards
          else
          if (choice == 'p')
//**** call print to print the flash cards in cards
          else
          if (choice == 'q')
//**** call quiz to quiz a user on the flash cards in cards
          else
             cout << "\nYou must enter one of a, r, p, q or s!";
          cout << "\n\nEnter a (add), r (remove), p (print), q (quiz) or s (stop): ";
          cin >> choice;
    }
    cout << "\nThanks for playing!\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
