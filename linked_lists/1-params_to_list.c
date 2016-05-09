#include <stdlib.h>
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

/*function that allocates a new node and links it to a list*/
int add_node(List **list, char *content)
{
  List *node;

  node = NULL;
  node = malloc(sizeof(List));
  if (node == NULL)
  {
      return (1);
  }
  node->str = string_copy(content);
  node->next = *list;
  *list = node;
  return (0);
}

/*function that allocates a new node and links it to the end of a list*/
int add_next_node(List **list, char *content)
{
  List *node;
  node = NULL;

  /*removed because we malloc in previous func*/
  /*node = malloc(sizeof(List));*/
  if (node == NULL)
  {
      return (1);
  }
  node->str = string_copy(content);
  node->next = NULL;
  *list = node;
  return (0);
}

/*function that creates a new list from the command line arguments*/
List *params_to_list(int ac, char **av)
{
  /*the part that does the first node*/
  int i;
  List *node;
  List *list;
  i = 1;

  list = NULL;

  node = NULL;
  node = malloc(sizeof(List));
  if (node == NULL)
  {
      return (NULL);
  }
  node->str = string_copy(av[1]);
  node->next = list;
  list = node;

  /*the part that adds the other nodes*/
  while (i < ac)
  {
    List *node;

    node = malloc(sizeof(List));
    if (node == NULL)
    {
        return (NULL);
    }
    node->str = string_copy(av[i]);
    node->next = NULL;
    list = node;
    i++;
    return (0);
  }
  return (0);
}
