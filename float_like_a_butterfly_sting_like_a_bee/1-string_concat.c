#include <stdlib.h>

/*function concatenates two strings*/
char *string_concat(char *s1, char *s2)
{
  int i = 0, j = 0, k, l;
  char *array_size;
  while (s1[i] != '\0') {
    i++;
  }
  while (s2[j] != '\0') {
    j++;
  }
  array_size = malloc((sizeof(char)) * (i + j));
  if(array_size == NULL)
  {
    return (0);
  }
  for (k=0 ; k < i ; k++){
  array_size[k] = s1[k];
  }
  for (l=0 ; l < j ; l++){
  array_size[i+l] = s2[l];
  }
    return(array_size);
}
