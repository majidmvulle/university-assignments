# include <stdio.h>
# include <cstring.h>
int main()
{

int commission;
int sales, yrs_worked;
string name;
printf("Enter the sales person name: ");
scanf("%s", name);
printf("Enter years worked: ");
scanf("%d", &yrs_worked);
printf("Enter total sales: ");
scanf("%d", &sales);

if(yrs_worked >0 && yrs_worked < 2)
{
   if (sales > 2000)
commission = 0.12 * (sales - 2000);
  {
       if (sales > 25000)
         commission = 0.14 * sales;

  }


}else

   if(yrs_worked > 2)
      { if(sales > 2000)
     commission = 0.2 * (sales - 2000);

           if (sales > 30000)
              commission = 0.17 * sales;
       }
 printf("Sales person name is: %s", name);
 printf("\nTotal sales are: %d\n", sales);
 printf("Total commission is: %d ", commission);


 return 0;

 }

