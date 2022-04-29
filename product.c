#include <cs50.h>
#include <stdio.h>

int main()
{
        int number1, number2, product;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    //calculating product
    product = number1 * number2;
    printf("%d * %d = %d", number1, number2, product);
}