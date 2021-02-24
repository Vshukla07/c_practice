//size of operator
//size of operator is unary operator.
//size of operator give us a number which indicates number of bytes.
//for size of operator we can pass variable ,connstant & datatype also.


#include<stdio.h>
void main()
{
int i=10;
char ch='a';
float f=23.5;
printf ("%d %d %d\n",sizeof(char),sizeof(ch),sizeof ('a'));
printf("%d %d %d\n",sizeof(float),sizeof(f),sizeof(23.5));
printf("%d %d %d\n",sizeof (int),sizeof(i),sizeof(10));

}
