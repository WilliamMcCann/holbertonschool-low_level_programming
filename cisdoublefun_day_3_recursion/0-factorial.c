/*iterative function that returns the factorial of a given number*/

int factorial(int n)
{
  int result;
  int i;

  result = 1;
  i = 1;

  if (n < 0 || n > 12)
  {
    return (-1);
  }

  while (i <= n)
  {
    result *= i;
    i++;
  }
  return (result);
}
