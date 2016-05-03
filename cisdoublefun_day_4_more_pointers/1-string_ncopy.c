/* function that copies a string*/
char *string_ncopy(char *dest, const char *src, int n)
{
  int i;
  i = 0;

  while (i < n)
  {
    dest[i] = src[i];
    i++;
  }
  return (dest);
}
