#include "my_functions.h"
#include <unistd.h>

/*print_char included so chars can print*/
int print_char(char c)
{   
    return (write(1 , &c , 1));
}

/*main function, takes variables h and n,
returns nothing*/
void triangles_in_the_term(int h, int n)
{
    /*declare variable i*/
    int i;

    /*for loop controls the number of 
    pyramids printed*/
    for ( i = 0 ; i < n ; i++ ){
       print_line(h);
        }
    }
/*secondary function, handles printing
each individual line*/
void print_line(int h){
    /*variables declared*/
    int n, c, i, s, a;
    /*counter variable set to h (which is
    the number of lines to print)*/
    c = h;
    /*for loop to print the proper
    number of lines*/
    for ( i = 0 ; i < h ; i++ ){
        /*counter variable decrements
        each loop*/
        c--;
        /*for loop to print the proper
        number of spaces before the
        asterisks*/
        for ( s = 0 ; s < c ; s++){
            /*prints the spaces*/
            print_char(' ');
        }
        /*initializes n relative to n*/
        n = ( i + i ) + 1;
        /*for loop controls the number of
        asterisks printed*/
        for ( a = 0 ; a < n ; a++){
            /*prints asterisks*/
            print_char('*');
        }
        /*prints the newline each time
        through the loop*/
         print_char('\n');
    }
}