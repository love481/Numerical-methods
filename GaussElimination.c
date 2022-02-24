#include<stdio.h>
#include<math.h>
int n;
void gaussElimination(float (*a)[n+2])
{
 float x[n+1],sum,factor;
 int j;
 for(j=1;j<=n;j++)
 {
     for(int i=1;i<=n;i++ )
     {  if(i>j)
         factor=a[i][j]/a[j][j];
        for(int k=1;k<=n+1;k++)
           a[i][k]=a[i][k]-(factor*a[j][k]);
      }
 }
 x[n]=a[n][n+1]/a[n][n];
 for(j=n-1;j>=1;j--)
 {
  sum=0;
  for(int k=j+1;k<=n;k++)
    sum+=a[j][k]*x[k];
  x[j]=(a[j][n+1]-sum)/a[j][j];
 }
 printf("required Solution is: \n");
for(int i=1;i<=n;i++)
{
    printf("%f\t",x[i]);
}
}
int main(void)
{
 printf("Enter the size of matrix\n");
 scanf("%d",&n);
 float a[n+1][n+2];
 printf("Enter the augmented matrix row wise:\n");
 for(int i=1;i<=n;i++)
    for(int j=1;j<=n+1;j++)
       scanf("%f",&a[i][j]);
     gaussElimination(a);

}
