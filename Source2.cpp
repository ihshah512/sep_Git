#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a hexadecimal number or anything else to quit:\n");
    while (scanf("%x", &number))
    {
        printf("Hexadecimal Number = %x\n", number);
        printf("Decimal Number     = %d\n", number);
    }
}