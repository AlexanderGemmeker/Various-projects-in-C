#include <stdio.h>

int main(void)
{
    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quantety = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantety);

    total = price * quantety;

    printf("%f", total);

    return 0;
}