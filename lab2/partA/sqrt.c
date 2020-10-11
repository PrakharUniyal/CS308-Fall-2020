/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

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

	int is_negative = 0;
	char magnitude[strlen(argv[1]) - 1];
	if (argv[1][0] == '-')
	{
		for (int i = 1; i < strlen(argv[1]); i++)
		{
			magnitude[i - 1] = argv[1][i];
		}

		is_negative = 1;
		argv[1] = magnitude;
	}

	for (int i = 0; i < strlen(argv[1]); i++)
	{
		if (argv[1][i]!='-' && !isdigit(argv[1][i]))
		{
			printf("Invalid input provided\n");
			return (0);
		}
	}

	int input = atoi(argv[1]);
	if (is_negative)
	{
		printf("Sqrt of -%d is %fi.\n", input, sqrt(input));
	}
	else
	{
		printf("Sqrt of %d is %f.\n", input, sqrt(input));
	}
	printf("End of program. Exiting\n");
	return(0);

} // end main
