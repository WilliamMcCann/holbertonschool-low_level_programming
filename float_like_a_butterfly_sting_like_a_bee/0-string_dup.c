#include <stdlib.h>

/*function returns length of string*/
int str_len(char *s){

    	int i;
	/*for loop moves through the array one position at a time, incrementing var i each time, until it reaches null.  Then it passes i back and i
    equals the number of array positions before the null*/
	for (i=0; *(s+i) != '\0'; i++){}

    return (i);
}

/*function duplicates a string*/
char *string_dup(char *str)
{
  char *output;
  int i;

  output = malloc(sizeof(char) * str_len(str));
  if(output == NULL)
  {
    return (0);
  }
for (i=0 ; i < str_len(str) ; i++){
  output[i] = str[i];
}
  return (output);
}
