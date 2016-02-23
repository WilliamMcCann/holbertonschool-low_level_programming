/*include prototypes*/
#include "my_functions.h"

/*main function, takes an intger
called "n", gives no output*/
int first_digit(int n){

	int length, number = n;

    if (n > 0){
		number = number * -1;    	
        n = n * -1;      
              } 

    for (length = 0; number < -9; length++){
    	number = number / 10;
    	}

	return(-number);
}
