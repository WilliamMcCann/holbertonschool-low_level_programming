/*the function takes int n and passes an int*/
int absolute(int n){

/*if statement addresses all negative numbers*/
if (n < 0)
	/*all numbers addressed by the if statement
	get multiplied by negative one to change all
	negative numbers into positive*/
	(n = n * -1);
	/*returns int n to the main function to be
	printed*/
	return (n);
}
