#include <stdio.h>
#include <math.h>

int main() {


    double radius = 0;
    double area = 0;
    double circumference = 0;
    const double pi = 3.14159;
    double surfaceArea = 0;
    double volume = 0;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);
    circumference = 2 * pi * radius;
    surfaceArea = 4 * pi * pow(radius, 2);
    volume = (4.0/3.0) * pi *pow(radius, 3);

    printf("Area of the circle: %.2lfcm^2\n", area);
    printf("Circumference of the circle: %.2lfcm\n", circumference);
    printf("Surface Area of the sphere: %.2lfcm^2\n", surfaceArea);
    printf("Volume of the sphere: %.2lfcm^3\n", volume);







    return 0;

}