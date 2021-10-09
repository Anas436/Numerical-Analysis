/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

double f(double x)
{
return x*x - 4*x - 10;  //change equation for each problem
}

double g(double x)
{
return ((x*x - 10)/4);
}

int main()
{
    double x, x0, Tol;
    int i=1;
    int No;

    printf("Enter approximate x0: ");
    scanf ("%lf", &x0);

    printf("Desired Tolerance: ");
    scanf ("%lf", &Tol);

    printf("Maximum Iterations: ");
    scanf ("%d", &No);


    while (i<=No)
    {
        x = g(x0);

        if((fabs(x-x0))<Tol)
        {
            //printf("%lf", &x);
            break;
        }
        printf("Iteration %d: Current value = %lf\n", i, x);

        i++;  //i=i+1
        x0=x;

        if (i>No)
        {
        printf("Method Failed after %d", No);
        printf(" iterations");
        }

    }

}

