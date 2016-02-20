/*#include <stdio.h>

int main(void)
{
   long long int f = 0, s = 1, next, c;
 
   
 
   for ( c = 0 ; c < 50 ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = f + s;
         f = s;
         s = next;
      }
      printf("%d\n",next);
   }
 
   return 0;
}
*/

#include <stdio.h>
 
int main()
{
   long int f = 0, s = 1, n, c;
 
   for ( c = 0 ; c < 50 ; c++ )
   {
      if ( c <= 1 )
         n = c;
      else
      {
         n = f + s;
         f = s;
         s = n;
      }
      printf("%li\n",n);
   }
 
   return 0;
}