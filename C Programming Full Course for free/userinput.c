#include <stdio.h>
#include <string.h>

int main(void)
{   
    int age = 0; // Everything to 0
    float gpa = 0.0f; // 0.0f so everybody can see its a floatingpoint
    char grade = '\0'; // \0 Null terminator
    char name[30] = ""; // 30 char. long, its the maximum size then

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa; ");
    scanf("%f", &gpa);

    printf("Enter you grade ");
    scanf(" %c", &grade); // One space to skip/clear the input buffer

    getchar();
    printf("Enter your full name ");
    fgets(name, sizeof(name), stdin); // File gets string, scanf can´t work with spaces
    name[strlen(name) - 1] = '\0'; // New line character is removed

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    

    return 0;

/*
    int age = 0;
    float gpa = 0.0f; // 0.0f so everybody can see its a floatingpoint
    char grade = '\0'; // \0 Null terminator
    char name[30] = ""; // 30 char. long, its the maximum size then

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
*/
}