#include <stdio.h>
int main() 
{
	int octal,decimal;
	printf("Enter an octal number:");
	scanf("%o,&octal");
	decimal=octal;
	printf("decimal value=%d\n",decimal);
	return 0;
}