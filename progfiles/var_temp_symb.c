/* demonstrating the use of symbolic constants */

#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print fahrenheit-celsius table */

float main()
{
	float fahr;
	for(fahr=LOWER; fahr<=UPPER; fahr+=STEP){
		printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	}
}
