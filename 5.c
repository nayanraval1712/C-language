// find out incomtax , groass incom , monthly incom 
#include<stdio.h>
void main()
{
    float monthly_incom =0;
    float grocss_incom =0;
    float incom_tax = 0;
    float net_incom =0;

    printf (" Enter A montly incom :");
    scanf ("%f", &monthly_incom);

    grocss_incom = (12 * monthly_incom);

    printf(" gross incom %f",grocss_incom);

    if (grocss_incom<300000)
    {
        incom_tax = (grocss_incom*0.05);
        net_incom = (grocss_incom-incom_tax);
        printf("\nincomtex %f",incom_tax);
        printf("\nnet incom %f",net_incom);
    }

    else if (grocss_incom>=300000 && grocss_incom <500000)
    {
        incom_tax = (grocss_incom*0.01);
        net_incom = (grocss_incom-incom_tax);
        printf("\nincomtex %f",incom_tax);
        printf("\nnet incom %f",net_incom);
    }
    
    else if (grocss_incom >=500000 && grocss_incom <800000)
    {
        incom_tax = (grocss_incom*0.2);
        net_incom = (grocss_incom-incom_tax);
        printf("\nincomtex %f",incom_tax);
        printf("\nnet incom %f",net_incom);
    }
    else if (grocss_incom>=800000 );
    {
        incom_tax = (grocss_incom*0.3);
        net_incom = (grocss_incom-incom_tax);
        printf("\nincomtex %f",incom_tax);
        printf("\nnet incom %f",net_incom);
    }
    
   
}