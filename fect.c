#include<stdio.h>
int main()
{
int num,fact=1,i;
printf("enter the number......");
scanf("%d",&num);
for(i=num; i>=1;i--)
fact=fact*i;
printf("fact=%d\n",fact);
}
