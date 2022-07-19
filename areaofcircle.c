#include <stdio.h>
#define PI 3.14

int main()
{
int r;
float area;

printf("Enter the radius of the circle: ");
scanf("%d",&r);
area = PI*r*r;

printf("The area is : %.5f",area);
return 0;
}

output

Enter the radius of the circle: 5
The area is : 78.50000
