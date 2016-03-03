void swap_int(int *a, int *b);

int *a, *b, c;

void swap_int(int *a, int *b){

	c = *a;
	*a = *b;
	*b = c;

}


