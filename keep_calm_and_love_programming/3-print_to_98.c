#include <stdio.h>
#include "my_functions.h"

void print_to_98(int n){

	for (n = n; n < 98; n++){
		printf("%d, ", n);

	}
	for (n = n; n > 98; n--){
		printf("%d, ", n);
	}
	if (n == 98){
		printf("98\n");
	}
}
