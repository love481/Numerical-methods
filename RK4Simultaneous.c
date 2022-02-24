#include<stdio.h>
#include<math.h>
float F(float x,float y,float z)
{

    return z;
}
float G(float x,float y,float z)
{

    return z*z*z-y*y*z;
}
int main(void)
{
 int n;
 printf("Given differential equation  is y''=(y')^3-y*y*y'\n");
 float x,y,z,dy,xp,h,k1,k2,k3,k4,l1,l2,l3,l4;
 printf("Input initial data for x ,y and z:\n");
 scanf("%f %f %f",&x,&y,&z);
 printf("Enter the input x at which u want to find y and z\n");
 scanf("%f",&xp);
 printf("Enter step size:\n");
 scanf("%f",&h);
 n=(xp-x)/h;
 printf("Starting Numerical Computation:\n");
 for(int i=1;i<=n;i++)
 {
   k1=h*F(x,y,z);
   l1=h*G(x,y,z);
   k2=h*F(x+h/2,y+k1/2,z+l1/2);
   l2=h*G(x+h/2,y+k1/2,z+l1/2);
   k3=h*F(x+h/2,y+k2/2,z+l2/2);
   l3=h*G(x+h/2,y+k2/2,z+l2/2);
   k4=h*F(x+h,y+k3,z+l3);
   l4=h*G(x+h,y+k3,z+l3);
   x+=h;
   y+=(k1+2*(k2+k3)+k4)/6;
   z+=(l1+2*(l2+l3)+l4)/6;
   printf("in %d iteration ,%f  %f  %f\n",i,x,y,z);
 }
 printf("Value of y and z at x=%f is %f and %f\n",xp,y,z);

}




