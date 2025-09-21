#include <stdio.h>

int main()
{
    int decimalNumber;
    printf("Enter an integer number: ");
    scanf("%d", &decimalNumber);
    printf("The octal equivalent of %d is: %o\n", decimalNumber, decimalNumber);

    return 0;
}

