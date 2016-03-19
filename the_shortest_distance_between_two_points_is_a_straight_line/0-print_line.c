int print_char(char c);

/*function prints a line of underscores equal to the input*/
void print_line(int n){
  int i = 0;
  while (i < n){
    print_char('_');
    i++;
  }
  print_char('\n');
}
