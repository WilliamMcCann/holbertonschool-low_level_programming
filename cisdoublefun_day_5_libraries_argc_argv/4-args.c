#include<stdio.h>

/*prints out all arguments passed via the command line*/
void main (int argc, char **argv)
{
  int i;
  i = argc;

  while (i > 0)
  {
    printf("%s\n", argv[i - 1]);
    i--;
  }
}
