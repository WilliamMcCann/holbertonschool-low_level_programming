/*header to include printf*/
#include <stdio.h>

/*function takes integer "n" and passes nothing"*/
void print_to_98(int n){

	/*n initialized as itself, loop runs until 98,
	increment n by one*/
	for (n = n; n < 98; n++){
		/*prints integer n*/
		printf("%d, ", n);
	}
	/*for loop initializes n as itself, runs while
	n is greater than 98, decrements n by one*/
	for (n = n; n > 98; n--){
		/*prints integer n*/
		printf("%d, ", n);
	}
	/*hardcoded special case ensures 98 prints 
	without trailing comma and space*/
	if (n == 98){
		/*prints integer 98 with no comma or space*/
		printf("98\n");
	}
}
