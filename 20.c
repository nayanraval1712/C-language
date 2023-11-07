// Write a programe to findout millineum year (leap year )
// 1200 , 1600 , 2000 ... 4000 gap in leap year
// 2012 , 2014 , 2018 ..../4 is =0
#include <stdio.h>
void main()
{
    int x=0;
    printf("enter Your Year");
    scanf("%d", &x);

    if ( x%4000==0 || x%4 ==0 && x % 100!= 0)
    {
        printf(" Congratulation  This is Leap Year");
    }
    else
    {
        printf("Sorry this is not leap year ");
    }
    
  }