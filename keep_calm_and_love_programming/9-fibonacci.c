/*header to include the prototype for printf*/
#include <stdio.h>
 
 /*function takes nothing, passes an int*/
int main(void)
{
	/*declares four long int variables,
	initializes f to zero and s to one,
	long int needed to handle the long
	numbers at the end of the sequence*/
   long int f = 0, s = 1, n, c;
 
 	/*for loop initializing c at zero,
 	running while c is less than fifty,
 	and incrementing c by one*/
   for ( c = 0 ; c < 50 ; c++ )
   {  
   	  /*if c is less than or equal to one*/ 		
      if ( c <= 1 )
      	/*make n equal to c*/
         n = c;
      /*else statement runs most of the
      function*/
      else
      {
      	/*next int is made equal to first int
      	plus second int*/
         n = f + s;
         /*first in made equal to second int*/
         f = s;
         /*second int made equal to next int*/
         s = n;
      }
      /*prints int n*/
      printf("%li\n",n);
   }
 	/*returns zero*/
   return 0;
}