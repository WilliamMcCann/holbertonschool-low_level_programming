#include "my_functions.h"

/*function concatenates (combines) two strings*/
char *concat_strings(char *dest, const char *src){
 int i=0, j;

 while (dest[i]!='\0'){
   i++;
}

 for (j = 0; src[j] != '\0'; i++, j++) {
   dest[i] = src[j];
 }

 dest[i] = '\0';
 return dest ;
}
