#include <stdio.h>

float main()
{
	float fahr, celsius;
	char fahr_heading[] = "Temp. in Fahrenheit";
	char cel_heading[] = "Temp in Celsius";
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	printf("%3s\t%6s\n", fahr_heading, cel_heading); 
	while(fahr <= upper){
		celsius = (5.0)* (fahr-32.0) / (9.0);
		printf("\t\t%3.0f\t\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}

}
