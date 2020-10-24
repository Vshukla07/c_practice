/*************febbonaci_serice****************/


#include<stdio.h>
int main ()
{
int a=0,b=1,c,num,i;
printf("enter the number:");
scanf("%d",&num);
printf("%d %d",a,b);
for(i=0;i<=num;i++)
{

c=a+b;
a=b;
b=c;

if (c<num)
printf("%d",c);
}
printf("\n");
}
