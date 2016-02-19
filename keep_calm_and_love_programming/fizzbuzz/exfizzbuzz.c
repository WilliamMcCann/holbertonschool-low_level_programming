#include <stdio.h>

int main(void)
{
	int n;

	for(n = 1; n < 100; n++)
	{
		if(n % 3 != 0 && n % 5 != 0)
			printf("%d, ",n);
		if(n % 3 == 0 && n % 5 == 0)
                        printf("FizzBuzz, ");
		if(n % 3 == 0)
			printf("Fizz, ");
		if(n % 5 == 0)
                        printf("Buzz, ");	
	}
		printf("Buzz");

	return (0);
}
