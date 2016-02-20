/*header to include printf*/
#include <stdio.h>

/*function takes nothing and returns an integer*/
int main(void)
{	
	/*declares variable n*/
	int n;

	/*for loop initializes n at one, runs while
	n is less than 100, increments n by one*/
	for(n = 1; n < 100; n++)
	{
		/*if n is not divisible by three or five*/
		if(n % 3 != 0 && n % 5 != 0)
			/*print n*/
			printf("%d, ",n);
		/*if n is divisible by three and five*/
		if(n % 3 == 0 && n % 5 == 0)
						/*print FizzBuzz and a space*/
                        printf("FizzBuzz, ");
        /*if n is divisible by 3*/            
		if(n % 3 == 0)
			/*print Fizz, a comma, and a space*/
			printf("Fizz, ");
		/*if n is divisible by 5*/
		if(n % 5 == 0)
						/*print Buzz, a comma, and a space*/
                        printf("Buzz, ");	
	}	/*print Buzz so the final buzz has no comma or space*/
		printf("Buzz");
	/*returns zero*/	
	return (0);
}
