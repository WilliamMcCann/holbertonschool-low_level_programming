#include "my_functions.h"
void reverse_string(char *s);

void reverse_string(char *s){

	int i, j;
    char temp;

    j=0;
    for (i=0; *(s+i) != '\0'; i++){}
    i = i - 1;
    while (j < i){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j++;
        i--;
    }
}
