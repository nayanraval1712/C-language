// triangle number 
#include <stdio.h>

int main()
{
    int count = 1, flash =  1;  
    
    while (flash<=5)
    {
        while (count <= flash  )
    {   printf("%d", count);
        count = count +1 ;
    }
    printf("\n");
    count = 1 ;
    flash = flash +1;
    }
    

    return 0;
}