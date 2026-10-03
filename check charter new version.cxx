#include<stdio.h>
#include<math.h>
int main()
{// check the character is vowel or consonent 
char ch ; 
scanf("%c", &ch);
if (ch=='a' || ch =='e'  || ch== 'i'  || ch=='o' || ch =='u'|| ch=='A' || ch =='E'  || ch== 'I'  || ch=='O' || ch =='U')
{ printf("yes it is vowel ");}
else 
{printf("no it is not vowel ");}
return 0 ;
}