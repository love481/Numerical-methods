#include<stdio.h>
#include<math.h>
#define mean(a,b) ((a+b)/2)
float fun(float);
int main(void)
{   float a,b,tolerance,c;
    printf("Given Function is:tan(2x)-4 \n");
    printf("Enter the tolerance:\n");
    scanf("%f",&tolerance);
    while(1){
    printf("Enter the satisfied interval between which you want to find a root:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    if  ((fun(a)<=0 && fun(b)<=0) || (fun(a)>=0 && fun(b)>=0))
        printf("Intermediate Value theorem does not satisfied.\n");
    else{printf("Intermediate Value theorem satisfied.\n");
        break;}}
    c=mean(a,b);
    while(fabs(a-b)>tolerance && fabs(fun(c))>tolerance){
      if (fun(a)>0){
    if(fun(c)>0)
        a=c;
      else
        b=c;}
       if (fun(b)>0){
    if(fun(c)>0)
        b=c;
      else
        a=c;}
      c=mean(a,b);}
    printf("The required root of given function is %f.",c);
}
float fun(float x){return (tan(2*x)-4);}
