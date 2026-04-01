#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    float price = 10.00;
    bool isStudent = true; // 10% discount
    bool isSenior = false; // 20% discount

    if(isStudent){
        printf("You get a student discount of 10%\n");
        price *= 0.9;
    }
    else if(isSenior){
        
    }

    printf("The price of a ticket is: $%.2f\n", price);

    // student = $9
    // senior = $8
    // student + senior = $7

    return 0;
}