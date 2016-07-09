#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,t;
clrscr();
printf("Entr the number\n");
scanf("%d",&n);
printf("Enter the element \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter  the target number\n");
scanf("%d",&t);
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]+a[j]==t)
printf("%d %d",a[i],a[j]);
}
}
getch();
}

