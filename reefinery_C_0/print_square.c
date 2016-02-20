/*include prototypes for print_char and others*/
int print_char(char c);
void print_hyphens(int ncopy);

/*function takes integer "n" and passes void*/
void print_square(int n){

	/*declares cleverly names variables*/
	int hyphen, space, stack, ncopy;

	/*to preserve the value of "n" for later use*/
	ncopy = n;

	/*if n is less than zero*/
	if (ncopy <= 0){
		/*output nothing except a new line*/
		print_char('\n');
	}

	/*hardcoding for n = 1*/
 	if (ncopy == 1){
 		print_char('o');
 		print_char('\n');
 	}
	
	if (ncopy >= 2){
	  print_hyphens(ncopy);

	  for (stack = ncopy -2 ; stack > 0 ; stack--){
	     print_char('|');
	     for (space = ncopy - 2 ; space > 0 ; space--){
	        print_char(' ');
	     }
	     print_char('|');
	     print_char('\n');
	  }
	  
	  print_hyphens(ncopy);

	}
}

void print_hyphens(int ncopy){

  int hyphen;
  
  print_char('o');

  for (hyphen = ncopy - 2 ; hyphen > 0 ; hyphen--){
    print_char('-');
 }
  print_char('o');
  print_char('\n');

}
