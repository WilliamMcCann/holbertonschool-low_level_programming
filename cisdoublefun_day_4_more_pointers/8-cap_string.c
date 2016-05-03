/*print_char*/
#include <unistd.h>

   int print_char(char c)
   {
         return (write(1, &c, 1));
   }

/*function that capitalizes all words of a string*/
char *main(char *n)
{

  int i;
  i = 0;

  while (n[i] != '\0')
  {
    if (n[i] == ' ')
    {
      if (n[i+1] >= 'a' && n[i+1] <= 'z')
      {
        n[i] = (n[i] - 32);
      }
    }
    i++;
    print_char (n);
  }
  return (0);
}
