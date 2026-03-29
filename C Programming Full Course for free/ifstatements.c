#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// if statement = Do some code if a condition is true.
//                If the condition is false, don`t do it.

int main(void)
{
    char name[50] = ""; // Name is 50 characters long
   
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // stdin = standard input
    name[strlen(name) - 1] = '\0'; // "\0" Null Terminator

    if(strlen(name) == 0){ // strlen = string length | ""== 0" if they didn`t type a name
        printf("Your did not enter your name");
    }
    else{
        printf("Hello %s", name);
    }
/*
//_______________________________________________________

    // Example with a boolean value

    bool isStudent = true;

    if(isStudent){ // ""== true" isn't necessary
        printf("You are a student");
    }
    else{
        printf("You are NOT a student");
    }

//_______________________________________________________
  
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
*/
    return 0; 
}