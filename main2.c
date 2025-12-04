#include <stdio.h>
#include <math.h>


int main()
{

 double radius = 0.0 ;
 double area = 0.0;
 double surfacceArea = 0.0;
 double volume = 0.0;
 const double PI = 3.14159;
 printf("ENter the radius; ");
 scanf("%lf", &radius);

 area = PI * pow(radius,2);

 surfacceArea = 4 * PI * pow(radius, 2);

 volume = (4.0/3) * PI * pow(radius , 3);
 printf("Area : %.2lf\n", area);
 printf("surfaceArea : %.2lf\n", surfacceArea);
 printf("volume : %.2lf\n", volume);
return 0;

}