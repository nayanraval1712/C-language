#include<stdio.h>
//  value of volume = pai*redious*redious*height
void main ()
{
    int radious =0;
    float pai=3.14;
    float height =0;
    float volume = 0;
    
    printf("fill the value of redious");
    scanf("%f",&radious);

    printf("fill the value of height");
    scanf("%f",&height);
    
    volume  = pai*radious*radious*height;
    printf("Avilable ans of volume %f",volume );
   
    }
