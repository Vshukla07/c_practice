///////logical operator
#include<stdio.h>
void main()
{
int i=10,j=20,k=30,l=40,m;
m=i&&j ||(k=300)&&(l=400);
printf("i=%d,j=%d,k=%d,l=%d,m=%d",i,j,k,l,m);
}
