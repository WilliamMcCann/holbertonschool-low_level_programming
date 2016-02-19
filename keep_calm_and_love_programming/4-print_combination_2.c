/*header to include prototypes*/
#include "my_functions.h"

/*main function, takes void and passes void*/
void print_combination_2 (void)
{
    /*declare variables "f" for the first digit
    to print and "s" as the second digit*/
	int f, s;
    
    /*"for" loop initializes f at 0, tells the
    loop to cycle as long as f is less than 8,
    then increments f by 1*/
    for (f = 0; f <= 8; f++){
        /*nested for loop initializes s to 0,
        tells the loop to cycles while s is
        less than 9, then increments s by 1*/
        for (s = 0; s <= 9; s++){
        /*if statement to not print double
        numbers or numbers which are
        previous combinations*/
        if (f < s){
        /*prints the first digit*/
        print_char('0' + f); 
        /*prints second digit*/
        print_char('0' + s);
        /*if statement to make sure comma isn't
        printed after last number*/
        if (f < 8){
        /*prints commas*/
        print_char(',');
        /*prints spaces*/
	    print_char(' ');
        }
        }
        }
     }	
}
