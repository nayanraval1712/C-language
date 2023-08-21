#include <stdio.h>
void main()
{
    float monthly_unit = 0;
    float monthly_bill = 0;
    float total_bill = 0;

    printf("monthly unit consuption :");
    scanf("%f", &monthly_unit);

    if (monthly_unit < 100)
    {
        monthly_bill = monthly_unit * 1;
        printf("\nThis is monthly bill %0.2f", monthly_bill);
        total_bill = monthly_bill * 1.5;
        printf("\nThis is the total bill amount  %0.2f", total_bill);
    }

    else if (monthly_unit > 100 || monthly_bill < 200)
    {
        monthly_bill = monthly_unit * 2;
        printf("\nThis is monthly bill %0.2f", monthly_bill);
        total_bill = monthly_bill * 1.5;
        printf("\nThis is the total bill amount  %0.2f", total_bill);
    }
    else if (monthly_unit > 200 || monthly_bill < 300)
    {
        monthly_bill = monthly_unit * 3;
        printf("\nThis is monthly bill %0.2f", monthly_bill);
        total_bill = monthly_bill * 1.5;
        printf("\nThis is the total bill amount  %0.2f", total_bill);
    }
    else if (monthly_unit > 300 || monthly_bill < 400)
    {
        monthly_bill = monthly_unit * 4;
        printf("\nThis is monthly bill %0.2f", monthly_bill);
        total_bill = monthly_bill * 1.5;
        printf("\nThis is the total bill amount  %0.2f", total_bill);
    }
    else if (monthly_unit > 400)
    {
        monthly_bill = monthly_unit * 5;
        printf("\nThis is monthly bill %0.2f", monthly_bill);
        total_bill = monthly_bill * 1.5;
        printf("\nThis is the total bill amount  %0.2f", total_bill);
    }
}
