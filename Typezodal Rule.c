/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>
float fn(float x)
{
sqrt(x);
return sqrt(x);
}
main()
{
int i,n;
float a,b,s=0,y=0,h;
printf("Enter the no of interval =");
scanf("%d",&n);
printf("Enter the lower limit=");
scanf("%f",&a);
printf("Enter the upper limit=");
scanf("%f",&b);
h=(b-a)/n;
for(i=1;i<=n-1;i++)
{
s=s+fn(a+i*h);
}
y=(fn(a)+fn(b)+2*s)*h/2;
printf("the value of y is=%f",y);
getch();
}
