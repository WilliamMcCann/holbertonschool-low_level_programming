int square_root(int n);

int my_function(int n, int y){
  if (y * y == n){
    return y;
  }
  if (n < 0 || (y * y) > n){
    return -1;
  }
  return my_function(n, y+1);
}

int square_root(int n){
  return my_function(n, 0);
}
