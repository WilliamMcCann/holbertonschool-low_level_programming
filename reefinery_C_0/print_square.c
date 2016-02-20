/*include prototypes for print_char and others*/
#include "reefinery_functions.h"
int print_char(char c);

/*function takes integer "n" and passes void*/
void print_square(int n){

	/*declares cleverly names variables*/
	int hyphen, pipe, space, stack, ncopy;

	/*to preserve the value of "n" for later use*/
	n = ncopy;

	/*if n is less than zero*/
	if (ncopy <= 0){
		/*output nothing except a new line*/
		print_char('\n');
	}

	/*hardcoding for n = 1*/
 	if (ncopy == 1){
 		print_char('o');
 		print_char('\n');
 	}

	if (ncopy == 2){
		print_char('o');
		print_char('o');
		print_char('\n');
		print_char('o');
		print_char('o');
		print_char('\n');
	}	

	if (ncopy > 2){
		print_char('o');
		for (hyphen = ncopy - 2 ; hyphen > 2 ; hyphen--){
			print_char('-');
		}
		print_char('o');
		print_char('\n');
			for (stack = ncopy -2 ; stack > 2 ; stack--){
				print_char('|');
				for (space = ncopy - 2 ; space > 2 ; space--){
				print_char(' ');
				}
				print_char('|');
				print_char('\n');
			}	
	}
	if (ncopy > 2){
		print_char('o');
		for (hyphen = ncopy - 2 ; hyphen > 2 ; hyphen--){
			print_char('-');
		}
		print_char('o');
		print_char('\n');

	}	

}
