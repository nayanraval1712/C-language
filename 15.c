// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 1000 for loop
#include <stdio.h>

int main() {
    
    int number = 1, num =0 ;
    // int nm = 0 ;
    
  while (num<=1000) 
  {  
      num = (number * number) + num ;
    printf (" %d",num);
    number = number + 1;
      
  }

    // printf("%d",number);
    // num = (number * number)+num ;
    // printf("\n%d", num);
    // number = number +1 ;
    // num = (number * number)+num ;
    // printf("\n%d", num);
    // number = number +1;
    // num = (number * number) + num;
    // printf("\n%d",num);
    // number = number +1 ;
    // num = (number * number) + num;
    // printf("\n%d", num);
    
    // for ( nm= 0 ; num < 1000 ; number = number +1 )
    // { num = (number * number) + num ;
    // printf (" %d",num);
    // number = number + 1;}
    
    

}
