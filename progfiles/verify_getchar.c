#include<stdio.h>

int main()
{
	int c;
	c = getchar();
	while((c=getchar())!=EOF){
		putchar(c);
		printf("%d\n", (c!=EOF));
	}
	printf("Value when it's EOF %d", (c=EOF));
	
}
