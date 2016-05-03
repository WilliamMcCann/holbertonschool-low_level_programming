/*prints chars*/
#include <unistd.h>

   int print_char(char c)
   {
         return (write(1, &c, 1));
   }

/*function that prints the content of an array of strings*/
void print_array_of_strings(char **a)
{
  int i;
  int j;
  j = 0;
  i = 0;

  while (a[i] != 0)
  {
    j = 0;
    while (a[i][j] != '\0')
    {
      print_char(a[i][j]);
      j++;
    }
    print_char(' ');
    i++;
  }
  print_char('\n');
}
