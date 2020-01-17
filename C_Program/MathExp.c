/*diameter of a circle

radius calculate

output:

    Enter a diameter: 5

    Radius is 2.5
*/
// Area ==> PI*r*r;
#include<stdio.h>
#include<math.h>
#define PI 3.1415

void main()
{
    float dia, rad, area;
    printf("Enter a diameter : ");
    scanf("%f",&dia);
    rad = dia/2;
    //area = PI*rad*rad;
    area = PI*pow(rad,2);
    printf("Radius is %.1f\nArea is %.2f",rad,area);
}

//user length and breadth of rectangle

//perimeter of Rect. ==> 2(l+b);








