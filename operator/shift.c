///shift operator//////    <<(left shift),>>(right shift)


//1)this operator are binary operator.
//2)we can't real number.
//3)i<<j means i is shifted j times (acodingly to sign left or right)
//4)shift operator does not change the operands .so we can provide either constant or varible as operand....(only integer family)


#include<stdio.h>
void main()
{
int i=10,j=2,k;
printf("i=%d,j=%d,k=%d\n",i,j,k);
k=i<<j;
printf("i=%d,j=%d,k=%d\n",i,j,k);
}

