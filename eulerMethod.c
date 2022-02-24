#include<stdio.h>
#include<math.h>
float Fun(float x,float y)
{

    return tan(x-y);
}
int main(void)
{
 int n;
 printf("Given differential equation  is (dy/dx)=tan(x-y)\n");
 float x,y,dy,xp,h;
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
   dy=h*Fun(x,y);
   x+=h;
   y+=dy;
   printf("in %d iteration ,%f  %f\n",i,x,y);
 }
 printf("Value of y at x=%f is %f\n",xp,y);

}

