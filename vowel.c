#include<stdio.h>
void main()
{
char ch;
printf("\n enter the character:");
scanf("%c",&ch);
if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
printf("\n the character is a vowel");
else
printf("\n the character is a consonant");
getch();
}
