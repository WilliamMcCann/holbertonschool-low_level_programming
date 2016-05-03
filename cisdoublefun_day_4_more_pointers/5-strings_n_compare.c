#include <stdlib.h>;

/*function that compares two strings, only first (at most) n bytes of s1 and s2*/
int strings_n_compare(char *s1, const char *s, size_t n)
{

  int p;
  int i;
  int j;
  i = 0;
  j = 0;
  p = 0;

  while ( < n)
    if (s1[i] >= s2[j])
    {
      p = (s1[i] - s2[j]);
    }

    if (s1[i] < s2[j])
    {
      p = ((s2[i] - s1[j]) * -1);
    }

    i++;
    j++;
  return (p);
}
