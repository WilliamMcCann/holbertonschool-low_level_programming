/*header to include prototypes*/
#include "my_functions.h"

/*main function, takes void and passes void*/
void print_combination_1 (void)
{
/*declare variable "n"*/
	int n;
/*for loop initializes n at zero, cycles while
n is less than ten, increments n by one*/
	for(n = 0; n < 10; n++){
/*prints char, uses the "add zero" trick to
get proper digit and convert int to char*/
		print_char('0' + n);

/*if statement works with numbers less than nine,
used to keep function from printing comma and
space after the nine*/
	if (n < 9)
/*prints the commas*/
		print_char(',');
/*prints the spaces*/
		print_char(' ');
	}
}


