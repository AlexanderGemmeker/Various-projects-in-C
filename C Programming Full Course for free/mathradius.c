#include <stdio.h>
#include <math.h>

int main(void)
{
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159; // Best practise const all uppercase 

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);

    return 0;
}