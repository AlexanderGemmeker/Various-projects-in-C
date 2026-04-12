#include <stdio.h>

int main(void){

    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 0;

    if(temp > 0){
        printf("The temperatur is GOOD");
    }
    else if (temp < 30){
        printf("The temperatur is GOOD");
    }
    else{
        printf("The temperatur is BAD");
    }

    return 0;
}