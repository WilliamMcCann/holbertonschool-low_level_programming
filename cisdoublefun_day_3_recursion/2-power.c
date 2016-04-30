int power(int x, int y)
{
  int i, p;
  i = 0;
  p = 1;

  if (y < 0)
  {
    return (-1);
  }

  if (x < 0)
  {
    return (-1);
  }

  if (y == 0)
  {
    return (1);
  }

  while (i < y)
  {
    p *= x;
    i++;
  }
  return (p);
}
