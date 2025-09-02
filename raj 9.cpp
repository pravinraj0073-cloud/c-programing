#include <stdio.h>

int main() 
{
	
    char hex[20];
    int decimal;
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    sscanf(hex, "%x", &decimal);
    printf("Octal representation: %o\n", decimal);
    return 0;
}