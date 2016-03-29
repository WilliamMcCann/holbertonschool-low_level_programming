/*indicates whether or not a number is prime*/
int my_function(int n, int d){
  if (n/d == 1){
    return 1;
  }
  if (n % d == 0){
    return 0;
  }
        return my_function(n, d+1);
  }


int is_prime_number(int n){
  if (n == -1){
    return 0;
  }
  if (n == 1){
    return 0;
  }
  if (n < 0){
    n = n * -1;
  }
  return my_function(n, 2);
}
