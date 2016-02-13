#include "my_functions.h"
void printpositive (int n);

/*main function, takes an intger
called "n", gives no output*/
void print_number(int n)
{
	if (n == 0){
                print_char('0');
                }

	if (n == -2147483648){
        n = n * -1;
        print_char('-');
        printpositive(214748364);
        print_char('0' + 8);
    }
    if (n > 0){
	   printpositive(n);
    }
    
    if (n < 0 && n > -2147483648){
        n = n * -1;
		print_char('-');
        printpositive(n);     
        }       
}
	
void printpositive (int n){
        int g, p, power, count, ncopy;
        ncopy = n;
		count = 1;
		while (ncopy > 9){
			ncopy = ncopy / 10;
			count++;  
		}
		power = 1;
		g = count;
		while (g > 1){
			power = power * 10;
			g--;
		}
		while (count > 0){
	 		p = (n / power);		
			print_char('0' + p);
			n = n % power;
			power = power / 10;
			count--;
		}
}
