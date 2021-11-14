
/* Numerical Analysis Lab Assignment-[02] using C programming Language.
 * Topic : Gauss Elimination method.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/


#include<stdio.h>


int main()
{

    int i, j, k, n, size;

    printf("\n\t\t\tGauss Elimination method using C Programming Language.\n");
    printf("\n\t\t\t\t :::Developed by Md. Anas Mondol:::\n");

    printf("\nEnter the size of your matrix : ");
    scanf("%d",&size);

    float A[size][size],c,x[size],sum;

    printf("\nEnter the order of your matrix : ");
    scanf("%d",&n);

    if(size>n)
    {

        printf("\nEnter the elements of augmented matrix row-wise:\n\n");
        for(i=1; i<=n; i++)
        {

            for(j=1; j<=(n+1); j++)
            {

                printf("A[%d][%d] : ", i,j);
                scanf("%f",&A[i][j]);

            }

        }

        for(i=1; i<=n; i++)
        {

            for(j=1; j<=n; j++)
            {

                if(j>i)
                {

                    c=A[j][i]/A[i][i];

                    for(k=1; k<=n+1; k++)
                    {

                        A[j][k]=A[j][k]-c*A[i][k];

                    }

                }
            }
        }

        printf("\nThe Upper Triangular matrix is: \n\n");
        for(i=1; i<=n; i++)
        {

            for(j=1; j<=(n+1); j++)
            {

                printf("%f ",A[i][j]);

            }

            printf("\n");

        }

        for(i=1; i<=n; i++)
        {

            x[i]=0;

        }

        printf("\nAfter applying Backward Substitution: \n\n");
        for(i=n; i>=1; i--)
        {

            sum=0;

            for(j=1; j<=n; j++)
            {

                if(i!=j)

                    sum=sum+A[i][j]*x[j];

            }

            x[i]=(A[i][n+1]-sum)/A[i][i];

        }


        printf("\nThe solution is: \n");
        for(i=1; i<=n; i++)
        {

            printf("\nThe value of x[%d] = %f\n",i,x[i]);

        }

    }

    else
    {

        printf("\nDear Sir, Please Enter your valid matrix order!\n");

    }

    return 0;
}

