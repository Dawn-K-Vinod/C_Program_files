/*
Author     : Dawn K Vinod
Description: Area of the circle and volume of the cylinder using Macros.
*/
#include <stdio.h>
#define PI 3.14159
#define circle_area(r) (PI * r * r)
#define cylinder_volume(r,h) (PI * r * r * h)

int main() {
	int r, h;
	printf("Enter the radius of circle and cylinder:");
	scanf("%d",&r);
	printf("Enter the height of cylinder:");
	scanf("%d",&h);
	
	printf("Area of the circle: %.3f\n",circle_area(r));
	printf("Volume of the cylinder: %.3f\n",cylinder_volume(r,h));
	return 0;
}
