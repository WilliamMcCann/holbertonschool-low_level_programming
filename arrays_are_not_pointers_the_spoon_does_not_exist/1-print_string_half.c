#include "my_functions.h"
void print_string_half(char *str);

/*counts the number of chars in the string, prints
the second half*/
void print_string_half(char *str)
{

  int c=0, x = 0, y=0;

  for (x = 0; (*(str+x) != '\0') ; x++){
    c++;
  }

  if (c % 2 == 0){
    y = (c / 2);
  }
  else {
    y = (c / 2)+1;
  }
  for ( ; str[y] != '\0' ; y++){
    print_char(str[y]);
  }
}
