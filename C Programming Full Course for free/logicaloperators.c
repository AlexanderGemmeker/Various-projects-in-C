#include <stdio.h>

int main(void){

    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 20;

    if(temp <= 0 || temp >= 30){
        printf("The temperatur is BAD");
    }
    else{
        printf("The temperatur is GOOD");
    }

    return 0;
}