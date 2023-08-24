#include <stdio.h>
void main()
{
    int count = 1, new = 5;

    while (new >= 1 && new <=5)
    {
        while (count < new)
        {
            printf("%d",count);
            count = count + 1;
        }
        count = 0;
        printf("\n");
        new = new - 1;
    }
}
