/*header to include prototypes*/
#include "my_functions.h"

/*main function, takes void and passes void*/
void print_combination_2 (void)
{
/*declare variable "n"*/
	int f, s, count;

	(count = 9);
	(f = 0);
	(s = 1);
	while (count > 0){
		print_char('0' + f);
		print_char('0' + s);
		count--;
		f++;
		s++;
/*"if" statement halts the printing of the
commas and spaces after f reaches 7, so all
numbers have commas except 89*/
	if (f < 9)
/*prints the commas*/
		print_char(',');
/*prints the spaces*/
		print_char(' ');
	}	
}
