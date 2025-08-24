#include <stdio.h>

void main()
{
float p,r,t;
float si;

clrscr();

printf("ENTER PRINCIPAL :");
scanf("%f",&p);

printf("ENTER RATE IN PERCENT:");
scanf("%f",&r);

printf("ENTER TIME :");
scanf("%f",&t);

si=p*r*t/100;

printf("SIMPLE INTEREST= %f",si);


getch();

}