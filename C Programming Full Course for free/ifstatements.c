#include <stdio.h>
#include <stdbool.h>

// if statement = Do some code if a condition is true.
//                If the condition is false, don`t do it.

int main(void)
{
    bool isStudent = true;

    if(isStudent){ // ""== true" isn't necessary
        printf("You are a student");
    }
    else{
        printf("You are NOT a student");
    }


/*  
    // Example with age
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 65){
        printf("You are a senior");
    }

    else if(age >= 18){
        printf("You are an adult");
    }

    else if(age < 0){
        printf("You haven't been born yet");
    }

    else if(age == 0){
        printf("You are a newborn");
    }

    else{
        printf("You are a child");
    }

    return 0;
*/ 
}