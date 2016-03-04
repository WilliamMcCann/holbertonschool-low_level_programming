#include "my_functions.h"
void print_string(char *str);


void print_string(char *str){
	
	int i;

    for (i=0; *(str+i) != '\0'; i++){
        print_char(str[i]);
    }    
}
