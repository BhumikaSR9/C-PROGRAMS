#include <stdio.h>

void main()
{
int p,r,t;
int si;

clrscr();

printf("ENTER PRINCIPAL :");
scanf("%d",&p);

printf("ENTER RATE IN PERCENT:");
scanf("%d",&r);

printf("ENTER TIME :");
scanf("%d",&t);

si=((p*r*t)/100);

printf("SIMPLE INTEREST= %d ",si);

getch();

}