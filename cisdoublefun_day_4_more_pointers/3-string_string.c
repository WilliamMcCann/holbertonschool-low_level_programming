/*function that finds a substring inside another string*/
char *string_string(const char *haystack, const char *needle)
{
  int i;
  int j;
  int k;
  k = 0;
  j = 0;
  i = 0;

  while (needle[j] != '\0')
  {
    j++;
  }

  while (haystack[i] != '\0')
  {
    if (needle[0] == haystack[i])
    {
      while (k != '\0')
      {
        if (needle[k] == haystack[i])
        k++;
      }
      
    }

    i++;
  }
}
