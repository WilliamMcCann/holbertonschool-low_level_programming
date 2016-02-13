/*include prototypes*/
#include "my_functions.h"
/*prototype for the printpositive function*/ 
void printpositive (int n);

/*main function, takes an intger
called "n", gives no output*/
void print_number(int n)
{
	/*hard-coding handles a zero*/
	if (n == 0){
                print_char('0');
                }

/*this section specifically to deal with the number -2147483648*/
	if (n == -2147483648){
/*makes the number positive so it will work with the
printpositive function*/
        n = n * -1;
/*hard-coding prints the minus sign in front of -2147483648
after it's processed by printpositive*/
        print_char('-');
/*runs 214748364 through the printpositive function so it
can be printed*/
        printpositive(214748364);
 /*hard-coding to print the final 8 of -2147483648 because
 without truncating the digits the number is larger than
 the ints the function can handle*/ 
        print_char('0' + 8);
    }

 /*puts all positive numbers through the loop*/
    if (n > 0){
/*sends all positive numbers into the printpositive
function*/
	   printpositive(n);
    }
 
 /*loop involves all negative numbers from zero to -2147483648*/
    if (n < 0 && n > -2147483648){
 /*multiply by negative one so number is positive and can 
 be handled by printpositive*/
        n = n * -1;
 /*prints minus sign*/
		print_char('-');
/*runs number through printpositive function*/
        printpositive(n);     
        }       
}
/*the printpositive function*/	
void printpositive (int n){
/*declares all variables*/
        int g, p, power, count, ncopy;
/*copies the value of "n" into "ncopy" to preserve
n's value*/
       	ncopy = n;
/*initializes the "count" variable at 1; count
is the number of times we divide "n" by 10 and
will give us the number of places (aka digits)
in n*/
		count = 1;
/*stops the loop when n can no longer be divided
by 10*/
		while (ncopy > 9){
/*divides ncopy by 10 on each cycle of the loop*/
			ncopy = ncopy / 10;
/*increments the count by one each cycle; when the loop
ends count will then store the number of times we
divided n by 10*/
			count++;  
		}
/*initializes "power" variable at 1; power will tell
us what the first number will be by which we'll divide 
n to get n's left-most digit*/ 
		power = 1;
/*initializes variable "g" at the value of count;
this lets us know how many times to divide n by
10 without losing count's value*/
		g = count;
/*keep running the loop while g (which is the number
of times we need to divide n) is above 1)*/
		while (g > 1){
/*multiplies power variable by 10 each cycle of the
for loop so we can move through sequentially through
each of the digits*/
			power = power * 10;
/*decrements g (aka count) by one each cycle of the 
loop*/
			g--;
		}
/*loop runs while count (number of times we divide
by 10) is greater than zero*/
		while (count > 0){
/*variable "p" is the number we will print; here we
make it equal to n divided by power because power
the number by which we divide n to isolate the 
left-most digit*/
	 		p = (n / power);		
/*prints p with print_char, but adds the ASCII 
zero because C will render the integer p as an 
ASCII character and adding the zero aligns the
integers with the English alphabet*/
			print_char('0' + p);
/*n becomes n modulus power to capture the
remainder of n after it's divided by power and route
remainder back through the loop*/
			n = n % power;
/*divides power by 10 so the next loop cycle
captures the next digit in the number*/
			power = power / 10;
/*decrement count each cycle of the loop*/
			count--;
		}
}
