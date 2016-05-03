/*print_char*/
#include <unistd.h>

   int print_char(char c)
   {
         return (write(1, &c, 1));
   }

/* function that changes all upper case letters of a string to lower case*/
char *lowercase_string(char *n)
{
  int i;
  i = 0;

  while (n[i] != '\0')
  {
    if (n[i] >= 'A' && n[i] <= 'Z')
    {
      n[i] = (n[i] + 32);
    }
    i++;
  }
  return (n);
}

/*main function to start things off*/
int main(void)
{
   char s[] = "Holberton School!\n";
   char *p;

   p = lowercase_string(s);
   print_char(*p);
   return (0);
}
