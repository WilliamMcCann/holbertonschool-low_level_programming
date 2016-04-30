int solve(int, int);

/*function that returns the natural square root of a number using recursion*/
int square_root(int n)
{
  int i;
  int s;
  s = 0;

  s = solve(n, i);
  return (s);
}

int solve(int n, int i)
{
  i = 0;

  if (n == 1)
  {
    return (1);
  }

  return (n /*do the thing here*/);
}
