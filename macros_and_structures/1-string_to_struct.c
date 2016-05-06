#include<stdlib.h>
#include<stdio.h>
#include "str_struct.h"
char *string_copy(const char *src, int a);

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

char *string_copy(const char *src, int a)
{
  char *dest;
  int i;
  i = 0;

  dest = malloc(sizeof(char) * a);

  while (src[i] != '\0')
  {
      if (dest == NULL)
    {
      return (NULL);
    }

    dest[i] = src[i];
    i++;
  }
  return (dest);
}

/*function that stores a string and its length in a newly allocated/
structure, and return the address of this structure*/
struct String *string_to_struct(char *frommain)
{
  struct String *str;
  char *var;


  var = string_copy(frommain, str_len(frommain));

  str = malloc(sizeof(struct String));
  if (str == NULL)
  {
    return (NULL);
  }

  str->str = var;
  str->length = str_len(var);
  return (str);
}
