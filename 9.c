// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000 
#include<stdio.h>
void main ()
{
    int number = 1 ;

    printf( "%d", number);

while (number<=1000)
{
    number = number +2;
    printf("%d", number);
    number = number +3;
    printf("\n%d", number);
    number = number +4;
    printf("\n%d", number); 
    printf("\n");
}
    

}
