/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (3*x - cos(x) - 1)
int main(){
float a=0,b=0,error=0,c,c_old;
int i=0;
printf("Input Interval: ");
scanf("%f %f",&a,&b);
if((f(a)*f(b))>0){
        printf("Invalid Interval Exit!");
        exit(1);
}
else if(f(a)==0 || f(b)==0){
        printf("Root is one of interval bounds. Root is %f\n",f(a)==0?a:b);
        exit(0);
}
printf("Ite\ta\t\tb\t\tc\t\tf(c)\t\terror\n");
do{
        c_old=c;
        //c = (a+b)/2;
        c=(((a*f(b))-(b*f(a)))/(f(b)-f(a)));
        printf("%2d\t%4.6f\t%4.6f\t%4.6f\t%4.6f\t",i++,a,b,c,f(c));
        if(f(c)==0){
                break;
        }else if(f(a)*f(c)<0){
                b=c;
        }else a=c;
                error=fabs(c-c_old);
        if(i==1){
                printf("----\n");
        }else printf("%4.6f\n",error);

}while(error>0.00005);
printf(" Root is %4.6f \n",c);
return 0;
}