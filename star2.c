#include <stdio.h>
void main()
{
    int count = 0;
    int flash = 0;

    
    while (count < 5)
    {
        printf("_");
        count = count + 1;
    }
      
    
    while (count < 5)
    {
        printf("_");
        printf("*");
        printf("_");
        printf("*");
        count = count + 1;
    }
    
    while (count<3)
    {
        printf("_");
        printf("_");
        printf("_");
        printf("*");
        count = count+1;
    }
    

    printf("\n");

    printf("_");
    printf("_");
    printf("*");
    printf("_");
    printf("_");
    printf("_");
    printf("_");
    printf("_");
    printf("*");

    printf("\n");

    printf("_");
    printf("*");
    printf("_");
    printf("_");
    printf("_");
    printf("_");
    printf("_");
    printf("_");
    printf("_");
    printf("*");

    printf("\n");

    printf("*");
    printf("_");
    printf("*");
    printf("_");
    printf("*");
    printf("_");
    printf("*");
    printf("_");
    printf("*");
    printf("_");
    printf("*");
    printf("_");
}