#include<stdio.h>
int main(void)
{
 int NumofData;
 printf("Enter the number of data points:\n");
 scanf("%d",&NumofData);
 float x[NumofData],F[NumofData],xp,fp=0,p;
 printf("Enter the Data points\nx\nF\n");
 for(int i=0;i<NumofData;i++)
   {scanf("%f %f",&x[i],&F[i]);
   printf("\n");}
printf("Enter the value at which you want to find the interpolation:\n");
scanf("%f",&xp);
for(int i=0;i<NumofData;i++)
{    p=1;
    for(int j=0;j<NumofData;j++)
    {

        if(i!=j)
          p*=(xp-x[j])/(x[i]-x[j]);
    }
    fp+=p*F[i];
}
printf("Lagrangian Interpolated function value at xp=%f is %f\n",xp,fp);
}
