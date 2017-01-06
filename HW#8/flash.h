#include <iostream>

using namespace std;

struct card
{
       int n1, n2, // values on flash card
           answer; // answer to flash card
       char op;    // operator (*, +, -, / or %)
       card* next; // pointer to the next card
};

typedef card* card_ptr;

class flash
{
      private:
         card_ptr front;
      public:
         flash ();
         void add_problem ();
         void remove_problem ();
         void print ();
         void quiz ();
};

flash :: flash ()
{
	
}
 
