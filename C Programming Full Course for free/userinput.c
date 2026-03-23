#include <stdio.h>

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
    scanf(" %c", &grade); // One space to skip the input buffer

    printf("Enter your first name ");
    scanf("%s", &name);

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

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