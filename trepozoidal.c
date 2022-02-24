#include<stdio.h>
#include<math.h>
float Fun(float x)
{

    return exp(x*x);
}
int main(void)
{
 int n;
 printf("Given function is exp(x^2)\n");
 printf("Enter the number of sub intervals:\n");
 scanf("%d",&n);
 float a,b,h,sum=0;
 printf("Enter the range a & b in which you want to find the integration:\n");
 scanf("%f %f",&a,&b);
 h=(b-a)/n;
 sum=h*(Fun(a)+Fun(b))/2;
 for(int i=1;i<=n-1;i++)
 {
 sum+=h*Fun(a+i*h);
 }
 printf("Integrated value is %f\n",sum);

}
