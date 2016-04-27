/*returning O if a number is odd otherwise 'E'*/
char odd(int n)
{
    if (((n << 31) | (n << 31)) == 0)
    {
      return ('E');
    }
    else
    {
      return ('O');
    }
}
