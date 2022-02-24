#include<stdio.h>
#include<math.h>
float f(float x)
{
   return x*x*x+4*x*x+5;

}
float main(void)
{
    float a,b,c,d,e;
    int count=1,n;
    printf("the given function is:x^3+4x^2+5\n");
    printf("Enter the value of a & b:\n");
    scanf("%f %f",&a,&b);
    printf("Enter the value of allowed error & maximum iteration:\n");
    scanf("%f %d",&e,&n);
    do{ if(f(a)==f(b))
        {
            printf("soln cant be found\n");return;
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        if((f(c)*f(a))>0)a=c;
        else b=c;
        printf("Iteration No:%d x=%f\n",count,c);
        count++;
        if(count==n){break;}
    }while(fabs(f(c))>e);
    if(fabs(f(c))<e)
    printf("The required solution is %f\n",c);
    else printf("No solution found\n");
}
