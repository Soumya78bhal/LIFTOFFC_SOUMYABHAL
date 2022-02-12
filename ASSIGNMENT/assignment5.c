#include<stdio.h>
#include<math.h>
int main(){
    float radius;
    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);
    printf("Diameter of circle is %f\n", 2*radius);
    printf("Circumference of circle is %f\n", 2*M_PI*radius);
    printf("Circumference of circle is %f\n", M_PI*radius*radius);

return 0;
}