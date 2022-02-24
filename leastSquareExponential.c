#include<stdio.h>
#include<math.h>
int main(void)
{
 int NumofData;
 printf("Enter the number of data points:\n");
 scanf("%d",&NumofData);
 float x[NumofData],y[NumofData],sumx=0,sumy=0,sumxx=0,sumxy=0,xmean,ymean,a,b;
 printf("Enter the Data points\nx\nF \n");
 for(int i=0;i<NumofData;i++)
   {
       scanf("%f %f",&x[i],&y[i]);
       printf("\n");
   }
for(int i=0;i<NumofData;i++)
{
    y[i]=log(y[i]);
}
   for(int i=0;i<NumofData;i++)
   {
     sumx+=x[i];
     sumy+=y[i];
     sumxx+=x[i]*x[i];
     sumxy+=x[i]*y[i];
   }
   xmean=sumx/NumofData;
   ymean=sumy/NumofData;
   b=(NumofData*sumxy-sumx*sumy)/(NumofData*sumxx-sumx*sumx);
   a=ymean-b*xmean;
   a=exp(a);
   printf("Required line is (y=%fe^%fx)",a,b);
}


