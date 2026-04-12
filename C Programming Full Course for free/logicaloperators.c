#include <stdio.h>
#include <stdbool.h>

int main(void){

    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    bool isSunny = true;

    if(isSunny){
        printf("It is SUNNY outside");
    }
    else{
        printf("It is CLOUDY outside");
    }

/*
    int temp = 20;

    if(temp <= 0 || temp >= 30){
        printf("The temperatur is BAD");
    }
    else{
        printf("The temperatur is GOOD");
    }
*/
    return 0;

}