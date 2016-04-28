#include <unistd.h>

   int print_char(char c)
   {
         return (write(1, &c, 1));
   }

/*function that returns the first number contained in a string*/
int string_to_integer(char *s)
{
  int i;
  int minus_sign;
  int save_number;
  minus_sign = 0;
  save_number = 0;
  i = 0;

  while (s[i] != '\0')
  {
    if (s[i] == '-')
    {
      minus_sign++;
    }
    if (s[i] >= '0' && s[i] <= '9')
    {
      save_number += (s[i] - '0');
      if (s[i + 1] >= '0' && s[i + 1] <= '9')
      {
        save_number = (save_number * 10);
      }
      else
      {
        if (minus_sign % 2 != 0)
        {
          save_number *= -1;
        }
        return (save_number);
      }

    }
    i++;
  }
  return (0);
}
