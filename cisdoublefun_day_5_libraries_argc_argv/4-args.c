#include <unistd.h>

int print_char(char c)
{
  return (write(1, &c, 1));
}

/*prints out all arguments passed via the command line*/
int main (int argc, char **argv)
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
    while (argv[k - 1][j] != '\0')
    {
      print_char(argv[k - 1][j]);
      j++;
    }
    print_char('\n');
    k--;
    i--;
  }
  return (0);
}
