/*header to include prototype*/
#include "my_functions.h"

/*main function, takes no input, gives
no output*/
void print_tebahpla(void)
{
	/*declares and integer variable
	called "i"*/
        int i;
	
	/*a "for" statement that
	initializes "i" at 122 (ascii
	for "z") and then decrements
	down to 97 (ascii "a") by
	single-digit steps*/
        for (i = 122; i > 96; i--)
        {
		/*prints the chars*/
                print_char(i);
        }
}

