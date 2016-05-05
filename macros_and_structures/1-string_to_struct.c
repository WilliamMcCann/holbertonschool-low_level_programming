#include<stdlib.h>
#include<stdio.h>
#include "str_struct.h"

int str_len(char *str)
{
  int i;
  i = 0;

  while (str[i] != 0)
  {
    i++;
  }
  return (i);
}

/*function that stores a string and its length in a newly allocated/
structure, and return the address of this structure*/
struct String *string_to_struct(char *var)
{
  struct String *str;

  str = malloc(sizeof(struct String));
  if (str == NULL)
  {
    return (NULL);
  }
  str->str = var;
  str->length = str_len(var);
  return (str);
}
