
void reverse_string(char *s);

void reverse_string(char *s){

	int i, j;
    char temp;

    j=0;
    /*for loop iterates through all positions before the null*/
    for (i=0; *(s+i) != '\0'; i++){}
    i = i - 1;
    /*while loop switches the first position and last postion of the array, through the var temp, moving outside to inside*/
    while (j < i){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j++;
        i--;
    }
}
