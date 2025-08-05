#include<stdio.h>
#include<math.h>
int main()
{
int n;
double sum=0,t=0;
printf("enter the number,n=");
scanf("%d",&n);
int i;
for(i=1;i<=n;i++)
{
 sum=sum*10+1;
 t+=sum;
 printf("sum=%f\n",sum);
}
printf("required sum is %f",t);
}
