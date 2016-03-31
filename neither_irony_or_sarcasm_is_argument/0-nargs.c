#include <stdio.h>

int main(int argc, char* argv[])
{
	argc--;
	if (argv[0] == 0){
		printf("error");
	}
	printf("%d\n", argc);
	return 0;
}
