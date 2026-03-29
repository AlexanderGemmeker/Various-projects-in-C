#include <stdio.h>

// switch = An alternative to using many if-else statements
//          More efficient w/ fixed integer values

int main(void){

    int dayOffWeek = 0;

    switch(dayOffWeek){
        case 1:
            printf("It is Monday");
            break; // To break out of the switch
        case 2:
            printf("It is Tuesday");
            break;
        case 3:
            printf("It is Wednesday");
            break;
        case 4:
            printf("It is Thursday");
            break;
        case 5:
            printf("It is Friday");
            break;
        case 6:
            printf("It is Saturday");
            break;
        case 7:
            printf("It is Sunday");
            break;
    }

// Later
/*
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
*/

    return 0;
}