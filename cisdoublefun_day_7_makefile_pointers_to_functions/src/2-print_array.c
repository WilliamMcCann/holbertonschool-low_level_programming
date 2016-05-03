void print_array(int *a, int n);
void printpositive (int n);
void print_number(int n);
int print_char(char);

void print_array(int *a, int n)
{
  int x;

  for (x = 0; x < n ; x++) {
      /*if (*(a+x) < *(a+n)) {*/
        print_number(*(a+x));
        if (x < n-1){
          print_char(',' + 0);
          print_char(' ' + 0);
        }
      /*}*/
  }
  print_char('\n');
}
