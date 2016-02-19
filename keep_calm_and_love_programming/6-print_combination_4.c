#include "my_functions.h"

void print_combination_4(void){

	int a, b, c, d;

	for (a = 0; a < 10; a++){
		for (b = 0; b < 10; b++){
			for (c = 0; c < 10; c++){
				for (d = 0; d < 10; d++){
					if ((a * 10) + b != (c * 10) + d){
					if ((a * 10) + b < (c * 10) + d){
					print_char(a + '0');
					print_char(b + '0');
					print_char (' ');
					print_char(c + '0');
					print_char(d + '0');
					if ((a * 10) + b != 98){
						print_char (',');
						print_char (' ');
}
}
}					
}
}
}
}
}