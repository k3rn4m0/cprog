/* Temperature coversion program in reverse */

#include<stdio.h>

float main()
{
	int fahr;

	for(fahr=300; fahr>=0; fahr=fahr-20){
		printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
