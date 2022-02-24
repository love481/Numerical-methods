#include<stdio.h>
#include<math.h>
#define Fun(x) (sin(x)-0.5)
#define DerivativeFun(x) (cos(x))
#define MaxIter 40
int main(void)
{printf("Given function is (sin(x) -0.5):\n");
int count=0;
float xn,x_n1,toleranceErr;
printf("Enter the initial value,Tolerance Error\n");
scanf("%f",&xn);
scanf("%f",&toleranceErr);
x_n1=xn-(Fun(xn)/DerivativeFun(xn));
while(fabs((x_n1-xn)/x_n1)>toleranceErr)
{
 xn=x_n1;
 x_n1=xn-(Fun(xn)/DerivativeFun(xn));
//printf("Iteration no %d ,x=%f\n",count+1,xn);
 if(++count>MaxIter)
 {

     printf("Solution does not exist in defined iteration\n");
     break;
 }
}
if(count<MaxIter)
printf("Solution is %f\n",x_n1);
}
