int print_char(char c);

/*takes an integer as argument and labels it pos, neg, or zero*/
void positive_or_not(int n)
{
  if (n > 0){
    print_char('P');
  }
  if (n == 0){
    print_char('Z');
  }
  if (n < 0){
    print_char('N');
  }
}
