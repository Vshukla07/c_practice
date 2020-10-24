/***********
sum of number
*************/

#include<stdio.h>
int main()
{
int num,i,s=0;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
s=s+i;
}
printf("%d",s);
}



