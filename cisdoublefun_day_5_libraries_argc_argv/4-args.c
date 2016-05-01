#include <unistd.h>

int print_char(char c)
{
  return (write(1, &c, 1));
}

/*prints out all arguments passed via the command line*/
void main (int argc, char **argv)
{
  int i;
  int j;
  int k;
  k = 0;
  j = 0;
  i = 0;

  k = argc;
  while (k > 0)
  {
    j = 0;
    while (argv[i][j] != '\0')
    {
      print_char(argv[i][j]);
      j++;
    }
    print_char('\n');
    k--;
    i--;
  }
}
