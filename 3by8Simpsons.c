#include<stdio.h>
#include<math.h>
float Fun(float x)
{

    return tan(x*x);
}
int main(void)
{
 int n;
 printf("Given function is tan(x*x)\n");
 printf("Enter the number of sub intervals:\n");
 scanf("%d",&n);
 float a,b,h,sum=0;
 printf("Enter the range a & b in which you want to find the integration:\n");
 scanf("%f %f",&a,&b);
 h=(b-a)/n;
 sum=(Fun(a)+Fun(b));
 for(int i=1;i<=n-1;i++)
 {
    if(i%3==0)
       sum+=2*Fun(a+i*h);
    else
       sum+=3*Fun(a+i*h);
 }
 sum=(sum*h*3)/8;
 printf("Integrated value is %f\n",sum);

}

