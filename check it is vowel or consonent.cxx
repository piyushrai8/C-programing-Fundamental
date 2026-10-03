#include<stdio.h>
#include<math.h>
int main()
{// check the character is vowel or consonent 
char ch ; 
scanf("%c", &ch);
if (ch=='a' || ch =='e'  || ch== 'i'  || ch=='o' || ch =='u')
{ printf("yes it is vowel ");}
else 
{printf("no it is not vowel ");}
return 0 ;
}