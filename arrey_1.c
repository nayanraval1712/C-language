#include <stdio.h>
void main()
{
    int flsh[5];
    int count = 0;
    int temp = 0 ;

    for (count = 0; count < 5; count++)
    {
        printf("enter the mark sub %d  ", count + 1);
        scanf("%d", &flsh[count]);
    }

       //  printf("enter the mark sub 2  ");
    //  scanf("%d",&flsh[1]);
    //  printf("enter the mark sub 3  ");
    //  scanf("%d",&flsh[2]);
    //  printf("enter the mark sub 4  ");
    //  scanf("%d",&flsh[3]);
    //  printf("enter the mark sub 5  ");
    //  scanf("%d",&flsh[4]);
    for (count = 0; count < 5; count++)
    {
        printf("\nnmark of subject %d : %d ", count + 1, flsh[count]);
    }

          
    // printf("\nmark of subject two  %d :", flsh[1]);
    // printf("\nmark of subject three  %d :", flsh[2]);
    // printf("\nmark of subject four  %d :", flsh[3]);
    // printf("\nmark of subject five  %d :", flsh[4]);
}