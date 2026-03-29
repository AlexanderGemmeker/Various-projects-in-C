#include <stdio.h>

// if statement = Do some code if a condition is true.
//                If the condition is false, don`t do it.

int main(void)
{
    int age = -1;

    if(age >= 18){
        printf("You are an adult");
    }

    else if(age < 0){
        printf("You haven't been born yet");
    }

    else{
        printf("You are a child");
    }

    return 0;
}