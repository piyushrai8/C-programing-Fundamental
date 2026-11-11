#include <stdio.h>

int main()
{
    // calculate percentage and show grade according to percentage 
    float p,c,m,h,e ;
    printf("enter the values of marks = ");
    scanf("%f%f%f%f%f", &p,&c,&m,&h,&e);
    float sum = p+c+m+h+e ;
    printf(" here is sum %f", sum );
    float percentage = (sum/500)*100;
    
    printf("here is percentage %f", percentage);
    if (percentage>=90)
    {printf("bhai grade A paae ho ");
    }
    else if (percentage>=70)
    {printf(" bhai grade B paae ho ");
    }
    else if (percentage>=50)
    {
        printf(" bhai grade C paae ho ");
    }
    else
    {
        printf(" bhai grade fail paae ho ");
    }
    return 0 ;
}

