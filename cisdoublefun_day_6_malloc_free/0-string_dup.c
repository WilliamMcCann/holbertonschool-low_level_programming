#include<stdlib.h>

/*returns a pointer to a newly allocated space in memory, which contains a
copy of the string given as a parameter*/
char *string_dup(char *str)
{
  int len;
  int i;
  char *ret;
  i = 0;
  len = 0;


  while (str[len] != '\0')
  {
    len++;
  }

  ret = malloc(len * sizeof(char));

  if (ret == NULL)
  {
    return (NULL);
  }

  while (len > 0)
  {
    ret[i] = str[i];
    i++;
    len--;
  }
  ret[i] = 0;

  return(ret);
}
