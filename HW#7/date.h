#include <iostream>
#include <cstdlib>
using namespace std;

// class representing a date
class date
{
  private: 
    int month, day, year;
    bool leap;  // true if a leap year
    void set_leap ();  // sets the leap variable for the year
  public:
    date ();  // constructor, creates a base date
    // sets a date to the given parameters
    date (int m, int d, int y);
    void operator++ ();  // moves a date forward one day
    void print (); // prints the date in readable format
    bool new_year (); // true if date is January first
    // equality test for two dates
    bool equal (date d);
    // greater than test for two dates
    bool operator> (date d);
    // returns a date with largest components of two dates
    date operator% (date d);
    // friend that returns the greatest of three dates
    friend date great3 (date d1, date d2, date d3);
};
 void date :: set_leap ()
 {
 	if(year % 4 == 0 && year % 100 != 0)
 	{
 		leap = true;
 	}
 	else
 	{
 		leap = false;
 	}
 }
 
 void date :: date()
 {
 	month = 1;
 	day = 1;
 	leap = false;
 }
 
void date :: operator++ ()
{	int days_in_month;
	if(month == 12 || 10 || 8 || 7 || 5 || 3 || 1)
	{
		days_in_month =31;
	}
	if(month == 4 || 6 || 9 || 11)
	{
		days_in_month =30;
	}
	if(month == 2 && leap = true)
	{
		days_in_month =29;
	}
	if(month == 2 && leap = false)
	{
		days_in_month =28;
	}
	
	day = day + 1;
	
	if(day  > days_in_month)
	{
		month = month + 1;
	}
	if(month > 12)
	{
		year = year + 1;
	}
}

void date :: print()
{
	char name_of_month;
	
		name_of_month = 'January';
	if (month = 2)
		name_of_month = 'February';
	if (month = 3)
		name_of_month = 'March';
	if (month = 4)
		name_of_month = 'April';
	if (month = 5)
		name_of_month = 'May';
	if (month = 6)
		name_of_month = 'June';
	if (month = 7)
		name_of_month = 'July';
	if (month = 8)
		name_of_month = 'August';
	if (month = 9)
		name_of_month = 'September';
	if (month = 10)
		name_of_month = 'October';
	if (month = 11)
		name_of_month = 'November';
	if (month = 12)
		name_of_month = 'December';	
	
	cout<<name_of_month<<day<<", "<<year<<endl;
}



























 
