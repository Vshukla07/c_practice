/**************
prime number
***************/
#include<stdio.h>
int main()
{
int i,j,num,c=0;
printf("enter the number.............\n");
scanf("%d",&num);
for(i=1;c<num;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
break;
}
printf("%d\n",i);
c++;
}
}
printf("\n");
printf("%d\n",c);
}
