//write a program to scan a character from the user & display the character is an upper case or lower




#include<stdio.h>
void main()
{
char ch;
printf("enter the char=\n");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
{
printf("lower case......\n");
}
else
{
printf("upper case.....\n");

}
}
