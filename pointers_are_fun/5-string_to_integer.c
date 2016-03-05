#include "my_functions.h"
int string_to_integer(char *s);

int string_to_integer(char *s){
    
    int i, m, p, n;
    /*loops through string, stops at null*/
    for (i=0; *(s+i) != '\0'; i++){
        /*if statements evaluate for pos or neg*/
        if (*(s+i) == 45) {
            m++;
        }
        
        
        so per discussion w gus, use one big single loop.  if it detects a number after the initial number, it runs the loop *then* adds.  if not it breaks out of the loop (gotta do it this way so it can keep looping beyond the first two numbers)
        
        
        
        
        /*picks out digits between zero and nine*/
        if (*(s+i) >= 48 && *(s+i) <= 57){
            /*n equals the digit in the string*/
            n = *(s+i);
            /*if the next char is a digit...*/
            if (*(s+(i+1))) >= 48 && (*(s+(i+1))) <= 57){
                /*...then multiply n by 10 and add the new digit*/
                n = n * 10 + (*(s+(i+1)));
        }
        /*gives the number the proper sign*/    
        if (m % 2 == 1){
            (n * -1);
        }
    }
        /*sends zero if no numbers present*/
        else(n = 48);
    return(n);
}
