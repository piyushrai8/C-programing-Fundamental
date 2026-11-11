#include <stdio.h>

int main() 
{ // check vowel or consonent using switch 
    char choice;
  
    printf("Choose the character  do you want to check vowel or consonent  ");
    scanf(" %c", &choice);

    switch (choice) 
    {
        case 'a':
        case 'A':
            printf("this is  vowel  ");
            
            break;
            case 'e':
        case 'E':
            printf("this is  vowel  ");
            break;
            case 'i':
        case 'I':
            printf("this is  vowel  ");
            break;
            case 'o':
        case 'O':
            printf("this is  vowel  ");
            break;
            case 'u':
        case 'U':
            printf("this is  vowel  ");
           
            break;
            
            

        default:
            printf("this is consonent");
    }

    return 0;
}
