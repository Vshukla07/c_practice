///////logical operator
#include<stdio.h>
void main()
{
int i=10,j=20,k;
printf("i=%d,j=%d,k=%d",i,j,k);
k=i;
i=j;
j=k;
printf("i=%d,j=%d,k=%d",i,j,k);
}
