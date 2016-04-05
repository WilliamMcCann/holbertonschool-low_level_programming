/*function takes char c and passes a char*/
char lowercase(char c){

	/*if statement capture all ASCII chars
	including and between "A" (ASCII 65) 
	and "z" (ASCII 90)*/
	if (c <= 90 && c >= 65){
		/*subtracts 32 from the ASCII
		value of the char, aligning the
		lower-case alphabet with the
		upper-case alphabet on the
		ASCII chart*/	
		(c = c + 32);
	}
	/*return a char to the next program*/
	return c;

} 


