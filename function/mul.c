#include<stdio.h>
int mul(int ,int);

int main()
{
int a=8,b=5,c;
c=mul(a,b);
printf("c=%d\n",c);
}
int mul(int a,int b)
{
return a*b;
}
