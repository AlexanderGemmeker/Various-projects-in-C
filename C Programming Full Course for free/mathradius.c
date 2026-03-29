#include <stdio.h>
#include <math.h>

int main(void)
{
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0; // Calculating a surface are of a sphere
    double volume = 0.0;
    const double PI = 3.14159; // Best practise const all uppercase 

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3); // Prevent integer devision

    printf("Area: %.2lfcm\n", area); // 2 digits after the decimal
    printf("Surface Area: %.2lfcm\n", surfaceArea);
    printf("Volume: %.2lfcm\n", volume);

    return 0;
}