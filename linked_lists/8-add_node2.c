#include<stdlib.h>
#include "list.h"

/*function copies string to new address*/
char *string_copy(const char *src)
{
  char *dest;
  int i;
  i = 0;

  dest = malloc(sizeof(char) + 1);

  while (src[i] != '\0')
  {
      if (dest == NULL)
    {
      return (NULL);
    }

    dest[i] = src[i];
    i++;

  }
  dest[i] = 0;
  return (dest);
}

/*function that allocates a new node and links it to the end of a list*/
int add_node(List **list, char *content)
{
  List *node;

  node = malloc(sizeof(List));
  if (node == NULL)
  {
      return (1);
  }
  node->str = string_copy(content);
  node->next = NULL;
  *list = node;
  return (0);
}
