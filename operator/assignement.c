///////assignmente operator......
//    (=)
// in assignment operataors right hand side can be variable or constant but left hand side must be variable...
//if it is constant on left side that it shows error (L)value required.

#include<stdio.h>
void main()
{
int i=10,j;
printf("i=%d,j=%d\n",i,j);
j=i;
printf("i=%d,j=%d\n",i,j);
}
