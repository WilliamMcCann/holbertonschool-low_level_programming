#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

/*print char func*/
int print_char(char c)
{
  return (write(1, &c, 1));
}

/*function that concatenates all command line arguments*/
char *all_in_one_args(int ac, char **av)
{
  int i;
  int j;
  int charcounter;
  char *ret;
  int pos;
  pos = 0;
  j = 0;
  i = 0;

  while (i < ac)
  {
    j = 0;
    while (av[i][j] != '\0')
    {
      j++;
    }
    charcounter += j;
    i++;
  }

  ret = malloc(sizeof(char) * (charcounter + ac));
  if (ret == NULL)
      {
           return (NULL);
      }
      
  i = 0;
  j = 0;
  while (i < ac)
  {
    j = 0;
    while (av[i][j] != '\0')
    {
      ret[pos] = av[i][j];
      j++;
      pos++;
    }
    ret[pos] = ('\n');
    pos++;
    i++;
  }
  ret[pos] = '\0';
  return(ret);
}
