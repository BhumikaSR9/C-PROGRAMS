#include <stdio.h>
#include <math.h>

void main()
{


int side1;
int side2;
int side3;
int s;
int area;

clrscr();


printf("ENTER LENGTH OF SIDE1: ");
scanf("%d",&side1);

printf("ENTER LENGTH OF SIDE2: ");
scanf("%d",&side2);

printf("ENTER LENGTH OF SIDE3:");
scanf("%d",&side3);

s=((side1+side2+side3)/2);

area=sqrt((s*(s-side1)*(s-side2)*(s-side3)));

printf("AREA OF TRIANGLE WITH SIDE LENGTHS %d , %d AND %d = %d ",side1,side2,side3,area);

getch();

}