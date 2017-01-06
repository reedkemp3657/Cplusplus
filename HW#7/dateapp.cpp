/*
  Homework 7
  
  Test file for date functions and overloaded operators
*/

#include <cstdlib>
#include <iostream>

#include "date.h"

using namespace std;

int main(int argc, char *argv[])
{
    // declare d1, d2 (March 6, 1984), d3 (March 6, 1984)
    date d1, d2 (3,6,1984), d3 (3,6,1984);
    // declare d4 (May 5, 1942), d5 (January 5, 1942), d6 (August 1, 1970)
    date d4 (5,5,1942), d5 (1,5,1942), d6 (8,1,1970);
    // declare d7 (August 28, 1900), d8 (January 2, 1910)
    date d7 (8,28,1900), d8 (1,2,1910);
    // declare d9 (April 17, 1928), d10 (July 6, 1981), d11 (November 10, 1940)
    date d9 (4, 17, 1928), d10 (7, 6, 1981), d11 (11, 10, 1940);
    // Some dates for return values
    date greatest, large_d9_d10, large_d10_d11;
    int day_count;   // counter for a number of days
    
    cout << "d1 is ";
    d1.print ();
    cout << "\nd2 is ";
    d2.print ();
    
    day_count = 0;
    // step d2 up to d3
    while (!d1.equal (d2))
    {
//          cout << endl;
//          d1.print ();
          ++d1;
          day_count++;
    }
    cout << "\n\nNumber of days from d1 to d2: " << day_count;
    
    ++d2;  // move d2 on more day
    
    if (d2 > d1)
      cout << "\n\nd2 is geater than d1 as it should be!";
    if (d1 > d2)
      cout << "\n\nThis should not happen! d1 is smaller!";
      
    cout << "\n\nd1 is ";
    d1.print ();
    cout << "\nd2 is ";
    d2.print ();
    cout << "\nd3 is ";
    d3.print ();
    
    if (d1 > d3)
      cout << "\n\nd1 > d3";
    if (d3 > d1)
      cout << "\n\nd3 > d1";
    
    greatest = great3 (d1, d2, d3);
    
    cout << "\n\nGreatest of of d1, d2 and d3 is ";
    greatest.print ();
    
    cout << "\n\nd4 is ";
    d4.print ();
    cout << "\nd5 is ";
    d5.print ();
    cout << "\nd6 is ";
    d6.print ();
    
    if (d4 > d5)
       cout << "\n\nd4 > d5";
    if (d5 > d4)
       cout << "\n\nd5 > d4";
    if (d4 > d6)
       cout << "\n\nd4 > d6";
    if (d6 > d4)
       cout << "\n\nd6 > d4";
    if (d6 > d5)
       cout << "\n\nd6 > d5";
    if (d5 > d6)
       cout << "\n\nd5 > d6";

    greatest = great3 (d4, d5, d6);
    
    cout << "\n\nGreatest of of d4, d5 and d6 is ";
    greatest.print ();
    
    cout << "\n\nd7 is ";
    d7.print ();
    cout << "\nd8 is ";
    d8.print ();
    
    cout << "\n\n";
    day_count = 0;
    // step d7 up to d8
    while (!d7.equal (d8))
    {
          // print the new years
          if (d7.new_year ())
          {
             d7.print ();
             cout << endl;
          }
             
          ++d7;
          day_count++;
    }
    cout << "\nNumber of days from d7 to d8: " << day_count;
    
    cout << "\n\nd9 is ";
    d9.print ();
    cout << "\nd10 is ";
    d10.print ();
    cout << "\nd11 is ";
    d11.print ();

    large_d9_d10 = d9 % d10;
    cout << "\n\nThe date with largest components from d9 and d10: ";
    large_d9_d10.print ();
    
    large_d10_d11 = d10 % d11;    
    cout << "\n\nThe date with largest components from d10 and d11 ";
    large_d10_d11.print ();
         
    cout << "\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
