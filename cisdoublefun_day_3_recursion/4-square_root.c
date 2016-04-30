/*iterative function that returns the natural square root of a number*/
int square_root(int n)
{
  int x;
  x = 1;

  while (x <= n)
  {
    if (n == x * x)
    {
    return (x);
    }
    else
    {
    x++;
    }
  }
  return (-1);
}
