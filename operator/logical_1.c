//////////////logical operator
#include<stdio.h>
void main()
{
int i=10,j=20,k,l;
k=i&&(j=200);
l=i||(j=200);
printf("i=%d,j=%d,k=%d,l=%d\n",i,j,k,l);
}
