int isPrime(int,int);

/*function that returns 1 if number is prime, 0 otherwise, using recursion*/
int is_prime_number(int n)
{
    int prime;

    prime = isPrime(n,n);

   if(prime==1)
        return (1);
   else
      return (0);

   return 0;
}

int isPrime(int n,int i)
{
    if(i==1)
    {
        return 1;
    }

    if (n%i==0)
    {
         return 0;
    }

    return(isPrime(n,i-1));

}
