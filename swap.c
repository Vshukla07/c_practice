#include<stdio.h>
int main()
{
int n1,n2,t;
printf("enter the numbers.......\n");
scanf("%d %d",&n1,&n2);
printf("before n1=%d n2=%d\n",n1,n2);

t=n1;
n1=n2;
n2=t;

printf("before n1=%d n2=%d\n",n1,n2);
}
