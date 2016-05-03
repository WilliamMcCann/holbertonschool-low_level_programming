/*print_char*/
#include <unistd.h>

int print_char(char c)
{
      return (write(1, &c, 1));
}

/*function that takes an integer in parameter and prints it*/
void print_number(int n)
{
  return (n);
}
