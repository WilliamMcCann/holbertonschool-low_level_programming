/*header to include prototypes*/
#include "my_functions.h"

/*main function, receives "int n"
and passes nothing*/
void positive_or_not(int n)
{
 /*if the int to be evaluated is
 greater than zero, do the following*/
 if (n > 0)
    {
      /*if the "if" statement is true,
      print char "P"*/		
      print_char('P');
    }
 /*if the int to be evaluated is
 less than zero, do the following*/
 if (n < 0)
    {
      /*if the "if" statement is true,
      print char "N"*/  	
      print_char('N');
    }
 /*if the int to be evaluated is
 equal to zero, do the following*/
 if (n == 0)
    {
      /*if the "if" statement is true,
      print char "Z"*/
      print_char('Z');
    }
}
