# include <stdio.h>
int main()
{


int id, kwh;
double bill;

scanf("%d", &id);
scanf("%d", &kwh);


if (kwh >= 1 && kwh <= 100)
    bill = 0.07 * kwh;
else if (kwh >= 101 && kwh <= 250)
    bill = (7.00 + 0.05) * (kwh - 100);

else if (kwh >= 251 && kwh <= 750)
    bill = (14.50 + 0.04) * (kwh - 250);
else if (kwh > 750)
    bill = (34.50 + 0.03) * (kwh - 750);

    printf("The amount of bill is %lf", bill);


    return 0;

}