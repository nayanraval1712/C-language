// Write a programe to take 5 name as input
#include <stdio.h>
void main()
{
    char name[5][6];
    int count = 0;

    printf("write a name of person one :");
    for (count = 0; count < 6; count++)
    {
        scanf("%c", &name[0][count]);
    } // scanf("%c",&name[0][1]);
      // scanf("%c",&name[0][2]);
      // scanf("%c",&name[0][3]);
      // scanf("%c",&name[0][4]);
    printf("disply the name");
    for (count = 0; count < 6; count++)
    {

        printf(" %c", name[0][count]);
    }
    // printf(" %c", name[0][1]);
    // printf(" %c", name[0][2]);
    // printf(" %c", name[0][3]);
    // printf(" %c", name[0][4]);
}