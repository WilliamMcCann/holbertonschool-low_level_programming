int is_prime_number(int n);


int primeno(int, int);

int is_prime_number(int n)
{
    int check;
    check = primeno(n, n / 2);
    if (check == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}

int primeno(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (n % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(n, i - 1);
       }
    }
}
