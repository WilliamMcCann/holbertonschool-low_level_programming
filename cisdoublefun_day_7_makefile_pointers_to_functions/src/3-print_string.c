void print_string(char *str);
int print_char(char);

void print_string(char *str){

	int i;
    /*for loop increments through each position
    of the array until it reaches null*/
    for (i=0; *(str+i) != '\0'; i++){
        /*prints the number of loops before reaching null, thus the number of
        characters*/
        print_char(str[i]);
    }
}
