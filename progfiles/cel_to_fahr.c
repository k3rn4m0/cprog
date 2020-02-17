#include<stdio.h>

float main()
{
	float fahr, celsius;
	char cel_heading[] = "Temp. in Celsius";
	char fahr_heading[] = "Temp. in Fahrenheit";
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("%s\t%s\n", cel_heading, fahr_heading);
	while(celsius<=upper){
		fahr = ((9.0/5.0) * celsius )+32.0;
		printf("\t\t%3.0f\t\t%6.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
}



