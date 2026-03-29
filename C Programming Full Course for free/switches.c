#include <stdio.h>

// switch = An alternative to using many if-else statements
//          More efficient w/ fixed integer values

int main(void){

    int dayOffWeek = 1;

    if(dayOffWeek == 1){
        printf("It is Monday");
    }
    else if(dayOffWeek == 2){
        printf("It is Tuesday");
    }
    else if(dayOffWeek == 3){
        printf("It is Wednesday");
    }
    else if(dayOffWeek == 4){
        printf("It is Thursday");
    }
    else if(dayOffWeek == 5){
        printf("It is Friday");
    }
    else if(dayOffWeek == 6){
        printf("It is Saturday");
    }
    else if(dayOffWeek == 7){
        printf("It is Sunday");
    }
    else{
        printf("Please enter a number (1 - 7)");
    }

    scanf("");

    return 0;
}