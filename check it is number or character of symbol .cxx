#include <stdio.h>

int main() 
{ // inout is digit , number or symbol
    int input;

    printf("Enter any input: ");
    
    scanf(" %c", &input);

    if ((input >= 'a' && input<= 'z') || (input >= 'A' && input <= 'Z')) 
    {
        printf("%c is an Alphabet");
    } 
    else if (input >= '0' && input <= '9') 
    {
        printf("'%c is a Digit\n", input);
    } 
    else 
    {
        printf("'%c is a Special Symbol\n", input);
    }

    return 0;
}
