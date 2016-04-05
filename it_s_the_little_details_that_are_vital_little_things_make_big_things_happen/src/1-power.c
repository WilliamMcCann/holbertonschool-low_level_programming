int power(int x, int y);

int power(int x, int y){
  if (y < 0){
    return -1;
  }
  else if (y == 0){
    return 1;
  }
  else {
    return (x*power(x,y-1));
    }
}
