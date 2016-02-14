#include "my_functions.h"

/*main function, takes void and passes void*/
void print_combination_3 (void)
{
    /*declare variables "f" for the first digit
    to print and "s" as the second digit and "t" 
    as the third digit*/
	int f, s, t;
    
    /*"for" loop initializes f at 0, tells the
    loop to cycle as long as f is less than 8,
    then increments f by 1*/
    for (f = 0; f <= 8; f++){
        /*nested for loop initializes s to 0,
        tells the loop to cycle while s is
        less than 9, then increments s by 1*/
        for (s = 0; s <= 9; s++){
            /*second nested for loop initializes t
            to 0, tells the loop to cycle while t
            is less than 9, then increments t by 1*/
            for (t = 0; t <=9; t++){
            /*if statement to not print triple
            numbers or numbers which are
            previous combinations*/
            if (f < s && s < t){    
            /*prints the first digit*/
            print_char('0' + f); 
            /*prints second digit*/
            print_char('0' + s);
            /*prints third digit*/
            print_char('0' + t);
            /*if statement to make sure comma isn't
            printed after last number*/
            if (f < 7){
            /*prints commas*/
            print_char(',');
            /*prints spaces*/
            print_char(' ');
            }
            }
            }
        }
     }	
}


