/*function that reverse a string*/
char *rev_string(char *str)
{
  int i;
  int j;
  int k;
  int l;
  char temp;
  i = 0;
  j = 0;
  k = 0;
  l = 0;
  while (str[i] != '\0')
  {
    i++;
  }

  k = i;
  k--;

  while (k > 0)
  {
    temp = str[l];
    str[l] = str[k];
    str[k] = temp;
    k--;
    l++;
  }
  return (str);
}
