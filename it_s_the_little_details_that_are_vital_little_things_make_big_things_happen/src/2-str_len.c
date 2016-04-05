int str_len(char *s);

int str_len(char *s){
	
    	int i;
	/*for loop moves through the array one position at a time, incrementing var i each time, until it reaches null.  Then it passes i back and i
    equals the number of array positions before the null*/
	for (i=0; *(s+i) != '\0'; i++){}
  
    return (i);
}

