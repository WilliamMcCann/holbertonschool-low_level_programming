/*function that reverses a string*/
char *rev_string(char *str)
{
  int i;
  int c;
  char temp;
  i = 0;
  c = 0;

  while (str[i] != '\0')
  {
    i++;
  }

  i = i - 1;

  while (c < i)
  {
    temp = str[c];
    str[c] = str[i];
    str[i] = temp;
    c++;
    i--;
  }
  return (str);
}
