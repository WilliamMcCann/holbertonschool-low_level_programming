/*include prototypes*/
#include "my_functions.h"

/*main function, takes an intger
called "n", gives no output*/
int first_digit(int n){

	/*declares int variables length and number,
	initializes number as n*/
	int length, number = n;
    /*for all numbers greater than zero*/	
    if (n > 0){
		/*make number negative by multiplying
		it by -1*/
		number = number * -1;    	
	/*make n negative by multiplying it by -1*/
        n = n * -1;      
              } 
    /*for loop in which var length is initialized at
    zero, loops while number is less than -9, then
    increments length by one*/		
    for (length = 0; number < -9; length++){
	/*number equals number divided by ten*/
    	number = number / 10;
    	}
	/*return number, negative to balance out
	when we swapped the positive numbers to negative
	in the beginning*/
	return(-number);
}
