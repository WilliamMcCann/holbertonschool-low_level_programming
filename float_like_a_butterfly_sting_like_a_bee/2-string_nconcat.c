#include <stdlib.h>

/*concatenates a string and n chars of a second string*/
char *string_nconcat(char *s1, char *s2, int n)

{
  int i = 0, j = 0, k, l;
  char *new_array;
  while (s1[i] != '\0') {
    i++;
  }
  while (s2[j] != '\0') {
    j++;
  }
  new_array = malloc((sizeof(char)) * (i + n));
  if(new_array == NULL)
  {
    return (0);
  }
  for (k=0 ; k < i ; k++){
  new_array[k] = s1[k];
  }
  for (l=0 ; l < n ; l++){
  new_array[i+l] = s2[l];
  }
    return(new_array);
}
