// finde our the bim catagery
#include <stdio.h>
void main()
{
   float weight = 0;
   float inch = 0;
   float foot = 0;
   float meter_inch = 0;
   float meter_foot = 0;
   float meter = 0;
   float bim = 0;

   printf(" print the value of weight :");
   scanf("%f", &weight);
   printf(" print the value of foot :");
   scanf("%f", &foot);
   printf(" print the value of inch :");
   scanf("%f", &inch);

   meter_inch = (inch / 39.37), meter_foot = (foot / 3.281);
   meter = (meter_inch + meter_foot);
   printf("valur of meter%f ;", meter);
   bim = weight / (meter * meter);
   printf("\nprint rhe bim %f; ", bim);

   if (bim < 16)
   {
      printf("\nservise theakneass ");
   }
   else if (bim > 16 && bim < 17)
   {
      printf("\n modress thikneass");
   }
   else if (bim > 17 && bim < 18.5)
   {
      printf("\n mild  thikneass");
   }
   else if (bim > 18.5 && bim < 25)
   {
      printf("\n normal");
   }
   else if (bim > 25 && bim < 30)
   {
      printf("\n over weight ");
   }
}