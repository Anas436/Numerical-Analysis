/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<math.h>
void main()
{
    float abserror, relerror, percerror, trueval, approxval;
    printf("enter true value");
    scanf("%f",&trueval);
    printf("enter approx value");
    scanf("%f",&approxval);
    abserror=fabs(trueval-approxval);
    relerror=abserror/trueval;
    percerror=relerror*100;
    printf("absolute error = %f",abserror);
    printf("\nrelative error = %f",relerror);
    printf("\npercentage error = %f",percerror);
}
