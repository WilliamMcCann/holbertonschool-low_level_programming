/*function takes char c and passes a char*/
char uppercase(char c){

	/*if statement capture all ASCII chars
	including and between "a" (ASCII 97) 
	and "z" (ASCII 122)*/
	if (c <= 122 && c >= 97){
		/*subtracts 32 from the ASCII
		value of the char, aligning the
		lower-case alphabet with the
		upper-case alphabet on the
		ASCII chart*/	
		(c = c - 32);
	}
	/*return a char to the next program*/
	return c;

} 


