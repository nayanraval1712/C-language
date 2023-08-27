// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
#include <stdio.h>
void main()
{
  int number = 0;
  int num = 0;

  printf("%d", number);

  do
  {
    num = num + 1;
    number = number + num;
    printf("\n%d", number);
    // num = num +1;
    //  number  = number +num ;
    //  printf("\n%d", number );

  } while (number <= 990);
  //  num = num + 1
  //  number  = number +num ;
  //  printf("\n%d", number );
}