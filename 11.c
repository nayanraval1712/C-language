// inverse half piramid 
#include<stdio.h>
void main ()
{
    int count =0 , flash = 6 ;

    while (flash >0)
{
    while (count<=flash)
   { 
    printf("*");
    count = count +1;
    }
    printf("\n");
    count = 0;
    flash = flash - 1;
}

  
}