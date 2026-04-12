#include <stdio.h>

int main(void){

    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 5;

    if(temp > 0 && temp < 30){
        printf("The temperatur is GOOD");
    }
    else{
        printf("The temperatur is BAD");
    }

    return 0;
}