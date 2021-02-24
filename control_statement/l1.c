//write a program to scan a character from the user display the character & its ascii vaalue  only if the given character is small latter.



#include<stdio.h>
void main()
{
char ch;
printf("eneter the character\n");
scanf("%c",&ch);
if(ch>=97  && ch<=122)
{//if(ch>='a' && ch<='z')

printf("ch=%c & its ascii=%d\n",ch,ch);
}}
