
/* Numerical Analysis Lab Assignment using C programming Language.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/

#include<stdio.h>
#include<math.h>

#define PI 3.142857143 // using pi value from 22/7.

void Options();
void ForwardDiff();
void CentralDiff();
void BackwardDiff();


double f (double x)
{
    return sin(x);
}


void main()
{
    int choice;

    Options();

    scanf("%d", &choice);

    switch(choice)
    {
    case 1 :

        ForwardDiff();
        break;

    case 2 :

        CentralDiff();
        break;

    case 3 :

        BackwardDiff();
        break;

    default :

        printf("\nDear Sir, Please Enter your valid Number!\n");

    }
}


void Options()
{
    printf("\n\t*******Numerical Analysis Lab Assignment*********\n");
    printf("\t ***This program developed by Md. Anas Mondol***\n");
    printf("\nDear Sir, Please select any one option which you want to calculate : \n\n");
    printf("\tEnter [1] : Forward Difference.\n");
    printf("\tEnter [2] : Central Difference.\n");
    printf("\tEnter [3] : Backward Difference.\n");
    printf("\nEnter your expected choice: ");

}

void ForwardDiff()
{
    double a, degree, h;

    printf("\nEnter a and h separated by space : ");
    scanf("%lf %lf", &degree, &h);

    a = degree * (PI / 180.0); // converting degree to radian.

    double res = (f(a+h)-f(a))/h;

    printf("\nForward Difference f'(a) is : %lf\n", res);

}

void CentralDiff()
{
    double a,degree, h;

    printf("\nEnter a and h separated by space : ");
    scanf("%lf %lf", &degree, &h);

    a = degree * (PI / 180.0); // converting degree to radian.

    double res = (f(a+h)-f(a-h))/(2*h);

    printf("\nCentral Difference f'(a) is : %lf\n", res);

}

void BackwardDiff()
{
    double a,degree, h;

    printf("\nEnter a and h separated by space : ");
    scanf("%lf %lf", &degree, &h);

    a = degree * (PI / 180.0); // converting degree to radian.

    double res = (f(a)-f(a-h))/h;

    printf("\nBackward Difference f'(a) is : %lf\n", res);

}


