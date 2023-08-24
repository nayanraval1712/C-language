//  peramid of sequance 1 22 333 4444 55555 66666 
#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 6;
     int number = 1;
     while (flash > 0)
     {
          while (count < number)
          {
               printf("%d ", number);
               count = count + 1;
               
          }
          printf("\n");
          number = number + 1;
          count = 0;
          flash = flash - 1;
     }
}