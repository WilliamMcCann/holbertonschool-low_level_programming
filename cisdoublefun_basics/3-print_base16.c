int print_char(char c);

/*prints all the numbers of base 16*/
void print_base16(void)
{
   int x;
   int y;
	 x = 48;
   y = 65;
	 while (x < 58)
	 {
	 print_char(x);
	 x++;
 	 }
   while (y < 71)
	 {
	 print_char(y);
	 y++;
 	 }
}
