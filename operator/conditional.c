//conditional operator.....//
// it is a ternary operator(reqirees 3 oprand)
// result of this operation may be the second oparand or may be the second oprand or may be the third oprand depends on first oprand.
//if the firs oprand is non-zero then the entire oprator result is second one else if it is third one.


#include<stdio.h>
void main()
{
int i=10,j=20,k;
k=i<j?100:200;
printf("k=%d\n",k);

//if i>j in above eq.
//i<j?(k=100):k=200;
}
