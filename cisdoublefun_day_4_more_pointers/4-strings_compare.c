/*function that compares two strings*/
int strings_compare(char *s1, const char *s2)
{

  int p;
  p = 0;

  if (s1[0] >= s2[0])
  {
    p = (s1[0] - s2[0]);
  }

  if (s1[0] < s2[0])
  {
    p = ((s2[0] - s1[0]) * -1);
  }
  return (p);
}
