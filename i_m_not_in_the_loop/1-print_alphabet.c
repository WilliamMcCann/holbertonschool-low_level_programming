/*header to include prototypes*/
#include "my_functions.h"

/*main function, takes no input, gives
no output*/
void print_alphabet(void)
{
	/*declaring the integer "i"*/
	int i;
	/*"for" statement saying the 
	int should start at 97 (which 
	is "a" in ascii) and increment
	up by 1 until it reaches 122
	(which is ascii "z") and then
	stop)*/
	for (i = 97; i < 123; i++)  
	{
		/*prints each char*/
		print_char(i);
	}
}

