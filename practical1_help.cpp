# include <iostream.h>
# include <string.h>


void initialize(int coins_arr[], int drinks_arr[])
{
int i;
  for(i=0;i<4;i++)
   {
       coins_arr[i]=5;
       drinks_arr[i]=5;

    }

 }

void display_coins_drinks(int coins_arr[], int drinks_arr[])
{

   cout<<"[Coins available: RM 1 ["<<coins_arr[0]<<"] RM0.50 ["<<coins_arr[1]<<"] RM0.20 ["<<coins_arr[2]<<"] RM0.10 ["<<coins_arr[3]<<"]  ]"<<endl;
   cout<<"[Drinks available: Pepsi ["<<drinks_arr[0]<<"]    Coke ["<<drinks_arr[1]<<"] Orange ["<<drinks_arr[2]<<"] 7up ["<<drinks_arr[3]<<"]  ]"<<endl;


}

bool check_coins(int &amount, int coins_arr[])
{
   bool flag = true;
   switch (amount)
   {
    case 1:
    amount = 100;
    coins_arr[0]++;
    break;
    case 10:
    //amount;
    coins_arr[1]++;
    break;
    case 20:
    //amount;
    coins_arr[2]++;
    break;
    case 50:
    //amount;
    coins_arr[3]++;
    break;

    default: flag = false;
    //return flag;
    }
 return flag;
}


void get_coins(int &total_amount, int coins_arr[])
{
 int amount;
do
{
cout<<"Input coin ==> ";
cin>>amount;

if(check_coins(amount, coins_arr))
 {
  total_amount = total_amount + amount;


 }else
  cout<<"Invalid coin .. re enter"<<endl;

}while(total_amount<120);

}


void get_choice(int drinks_arr[])
{
   int choice;
 cout<<endl;
 cout<<"Drinks [RM 1.20]"<<endl;
  cout<<"1. Pepsi 2. Coke 3. Mirinda Orange 4. 7up"<<endl;
  cout<<"Choice ==> ";
  cin>>choice;

switch (choice)
{
  case 1:

  drinks_arr[0]--;
  break;
  case 2:

  drinks_arr[1]--;
  break;
  case 3:

  drinks_arr[2]--;
  break;
  case 4:

  drinks_arr[3]--;
  break;
  default:
  cout<<endl;
  }
}

void get_balance(int coins_arr, int amount)
{
int q1, q2, q3;
int balance = amount - 120;


if(balance > 0)
 {
  if (balance >= 50 && balance <= 80)
     q1 = balance / 50;
     cout<<q1<<"* 50";
     balance = balance % 50;
     //coins_arr[1]--;


  if (balance >= 20 && balance < 50)
    q2 = balance / 20;
     cout<<q2<<"* 20";
     balance = balance % 20;
     //coins_arr[2]--;


   if (balance >= 10 && balance < 20)
    q3 = balance / 10;
    cout<<q3<<"* 10";
    balance = balance % 10;
    //coins_arr[3]--;
  }
  else
  cout<<"No balance"<<endl;

return;
}





int main()
{
  int coins[4], drinks[4], total_amount = 0;
 initialize(coins, drinks);
 display_coins_drinks(coins, drinks);
 get_coins(total_amount, coins);
 get_choice(drinks);
 cout<<"Balance is ";
 get_balance(coins, total_amount);
 cout<<endl;




 return 0;


}