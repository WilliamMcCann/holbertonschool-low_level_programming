/*header to include prototypes*/
#include "my_functions.h"

/*main function (receives no input, passes no output)*/
void print_base16(void)
{
	/*declare integer variable "i"*/
        int i;

	/* initialize "i" at 48 (ascii
	"0") then increment up to 58 
	(ascii "9") by single-digit
	steps*/
        for (i = 48; i < 58; i++)
        {
		/*print the chars*/
                print_char(i);
        }
	/*initialize "i" at 65 (ascii
	"A") and incremet up to 71
	(ascii "F") by single-digit
	steps*/
	for (i = 65; i < 71; i++)
        {
		/*print chars*/
                print_char(i);
        }
}

