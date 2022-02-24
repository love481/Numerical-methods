#include<stdio.h>
#include<math.h>
#define Fun(x) (x*x*x-64)
#define G(x) ((64+x*x*x)/(2*x*x))
#define MaxIter 20
int main(void)
{printf("Given function is (x*x*x-64):\n");
int count=0;
float xn,x_n1,toleranceErr;
printf("Enter the initial value,Tolerance Error\n");
scanf("%f",&xn);
scanf("%f",&toleranceErr);
x_n1=G(xn);
while(fabs((x_n1-xn)/x_n1)>toleranceErr)
{
 xn=x_n1;
x_n1=G(xn);
printf("Iteration no %d ,x=%f\n",count+1,xn);
 if(++count>MaxIter)
 {

     printf("Solution does not exist in defined iteration\n");
     break;
 }
}
if(count<MaxIter)
printf("Solution is %f\n",x_n1);
}

