
/* Numerical Analysis Lab Assignment-[03] using C programming Language.
 * Topic : Gaussian Jordan Elimination method.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/

#include<stdio.h>


int main()
{

		 int i, j, k, n;
		 int size;

         printf("\n\t\t\tGauss Jordan Elimination method using C Programming Language.\n");
         printf("\n\t\t\t\t:::Developed by Md. Anas Mondol:::\n");

         printf("\nEnter your matrix size : ");
         scanf("%d", &size);

         float a[size][size], x[size], ratio;

		 /* Inputs */
		 /* 1. Reading number of unknowns */
		 printf("\nEnter number of matrix order : ");
		 scanf("%d", &n);


		 if(size>n)
         {
                /* 2. Reading Augmented Matrix */
             printf("\nEnter coefficients of Augmented Matrix:\n\n");
             for(i=1; i<=n; i++)
             {
                  for(j=1; j<=n+1; j++)
                  {
                       printf("a[%d][%d] = ",i,j);
                       scanf("%f", &a[i][j]);
                  }
             }

        /* Applying Gauss Jordan Elimination */
             for(i=1;i<=n;i++)
             {
                  if(a[i][i] == 0.0)
                  {
                       printf("\nMathematical Error!");

                  }

                  for(j=1;j<=n;j++)
                  {
                       if(i!=j)
                       {
                            ratio = a[j][i]/a[i][i];
                            for(k=1;k<=n+1;k++)
                            {
                                a[j][k] = a[j][k] - ratio*a[i][k];
                            }
                       }
                  }
             }

        /*After applying Gaussian Jordan Eliminations*/
            printf("\nIn Matrix form : \n\n");
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n+1;j++)
                {
                    printf("%f ",a[i][j]);
                }
                printf("\n");
            }

              /* Obtaining Solution */
             for(i=1;i<=n;i++)
             {
                x[i] = a[i][n+1]/a[i][i];
             }

                /* Displaying Solution */
             printf("\nThe Solution is :\n");
             for(i=1;i<=n;i++)
             {
                printf("\nThe value of x[%d] = %f\n",i, x[i]);
             }

         }

         else
         {
             printf("\nDear Sir, Please Enter your valid matrix size!\n");
         }

    return(0);

}
