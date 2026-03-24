#include <stdio.h>
#include <string.h>

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
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantety);

    total = price * quantety;

    printf("\nYour have bought %d %s\n", quantety, item);
    printf("The total is: %c%.2f", currency, total);

    return 0;
}