#include<stdio.h>
#include<math.h>
float Fun(float x,float y)
{

    return exp(x*x+y)/2;
}
int main(void)
{
 int n;
 printf("Given differential equation  is (dy/dx)=exp(x*x+y)/2\n");
 float x,y,dy,xp,h,k1,k2,k3,k4;
 printf("Input initial data for x and y:\n");
 scanf("%f %f",&x,&y);
 printf("Enter the input x at which u want to find y\n");
 scanf("%f",&xp);
 printf("Enter step size:\n");
 scanf("%f",&h);
 n=(xp-x)/h;
 printf("Starting Numerical Computation:\n");
 for(int i=1;i<=n;i++)
 {
   k1=h*Fun(x,y);
   k2=h*Fun(x+h/2,y+k1/2);
   k3=h*Fun(x+h/2,y+k2/2);
   k4=h*Fun(x+h,y+k3);
   x+=h;
   y+=(k1+2*(k2+k3)+k4)/6;
   printf("in %d iteration ,%f  %f\n",i,x,y);
 }
 printf("Value of y at x=%f is %f\n",xp,y);

}



