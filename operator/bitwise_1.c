///////bitwise operator
#include<stdio.h>
void main()
{
int i=10,j=15,k;
printf("i=%d,j=%d,k=%d",i,j,k);
//k=i|j;(15)

//k=i^j;(5)
k=~i;
printf("i=%d,j=%d,k=%d",i,j,k);
}
