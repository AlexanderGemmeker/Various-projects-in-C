#include <stdio.h>

void happyBirthday(char birthdayboi[], int yearsOld){
    printf("\nHappy birthday to you! ");
    printf("\nHappy birthday to you! ");
    printf("\nHappy birthday dear %s!", birthdayboi);
    printf("\nHappy birthday to you! ");
    printf("\nYou are %d years old!\n", yearsOld);
}

int main() {

    // function = A reusable section of code that can be invoked "called"
    //            Arguments can be sent to a function so that it can use them

    char name[] = "Bro";
    int age = 25;

    happyBirthday(name, age);

    return 0;
}