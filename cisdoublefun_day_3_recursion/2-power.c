/*iterative function that returns the value of x raised to the power of y*/

int power(int x, int y)
{
  int i;
  long int p;
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

  if (p > 2147483647)
    return (-1);

  if (p < -2147483648)
    return (-1);

  else
  return (p);
}
