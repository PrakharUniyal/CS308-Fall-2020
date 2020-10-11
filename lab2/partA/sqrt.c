/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  
	Usage - ./sqrt 81
	Output- Sqrt of 81 is 9.000000
	
	NOTE: Use -lm switch to link the math 
	library with this code while compiling.
*/
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	return(0);

} // end main
