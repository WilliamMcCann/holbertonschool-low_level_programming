void swap_int(int *a, int *b);

int *a, *b, c;

/*function takes the two pointers, swaps
one into a third variable, moves the the second
pointer into the first, then the third variable's value into the first pointer*/
void swap_int(int *a, int *b){

	c = *a;
	*a = *b;
	*b = c;

}


