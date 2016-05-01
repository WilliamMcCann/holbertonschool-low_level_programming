#include<stdio.h>

/*prints out all arguments passed via the command line*/
void main (int argc, char **argv)
{
  int i;
  i = 0;

  while (i < argc)
  {
    printf("%s\n", argv[i]);
    i++;
  }
}
