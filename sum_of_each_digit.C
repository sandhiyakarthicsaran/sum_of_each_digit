#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[3],sum=0;
printf("Enter the no of digits:\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}
