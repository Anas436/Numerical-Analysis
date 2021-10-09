/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#include <math.h>
void forwardDiff();
void backwardDiff();
void centralDiff();
void options();


double f(double x) {
    return sin(x);
}
int main()
{

    int c;
    options();
    scanf("%d", &c);
    switch(c)
    {
    case 1:
        forwardDiff();
        break;
    case 2:
        centralDiff();
        break;
    case 3:
        backwardDiff();
        break;
    default:
        return 0;
    }

    return 0;
}


void options()
{
    printf("Enter Choice \n");
    printf("\tEnter 1 (Forward Difference)\n");
    printf("\tEnter 2 (Central Difference)\n");
    printf("\tEnter 3 (Backward Difference)\n");
    printf("Enter Choice: ");
}

void forwardDiff()
{

    double a, h;
    printf("Enter a and h separated by space\n");
    scanf("%lf %lf", &a, &h);

    double res = (f(a+h)-f(a))/h;
    printf("f'(a) = %lf", res);
}

void centralDiff()
{

    double a, h;
    printf("Enter a and h separated by space\n");
    scanf("%lf %lf", &a, &h);
    double res = (f(a+h)-f(a-h))/(2*h);

    printf("f'(a) = %lf", res);

}

void backwardDiff()
{

    double a, h;
    printf("Enter a and h separated by space\n");
    scanf("%lf %lf", &a, &h);

    double res = (f(a)-f(a-h))/h;
    printf("f'(a) = %lf", res);
}
