////////bitwise operator///////  &,|,^,~,<<,>>......
//1)all the bitwise operator will not modify the operands.
//2)we can provide const or variable.
//3)we can not apply bitwise operators on real number.


#include<stdio.h>
void main()
{
int i=10,j=15,k;
printf("i=%d,j=%d,k=%d\n",i,j,k);
k=i&j;
printf("i=%d,j=%d,k=%d\n",i,j,k);
}
