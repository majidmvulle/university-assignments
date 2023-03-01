# include <iostream.h>


//double value_coins;
//char choice;
void get_process(double coins, char choice)
{
char pepsi = 1,coke=2,orange=3,seven_up=4;
int num_pepsi = 7;
int num_coke = 7;
int num_orange = 7;
int num_seven_up = 7;
int num_coins1 = 6;
int num_coins2 =6;
int num_coins3=6;
int num_coins4=6;
switch (choice)
{
 case '1':
 num_pepsi = num_pepsi--;
 break;
 case '2':
 num_coke = num_coke--;
 break;
 case '3':
 num_orange = num_orange--;
 break;
 case '4':
 num_seven_up = num_seven_up--;
 break;
 default:
 cout<<endl;
 }
 return;

}

void get_input(double& coins, char& choice)
{
cout<<"Input coin ==> "<<coins<<endl;
if (coins<1.20)
cout<<"Input coin ==> "<<endl;
else
if (coins>=2)
cout<<"Invalid coin.. re enter"<<endl;
else
if (coins >=1.20)
cout<<"Choice ==> "<<choice<<endl;
return;
}

int main()
{
cout<<"Coins available: RM 1 ["<<num_coins4<<
char choice;
double coins;
int input;
input = get_input(coins,choice)
choice = get_process(double coins, char choice)

return 0;
}

value_coins = coins - 1.20;
balance = num_coins


coins_back=coins-1.20;
num_coins_back
switch coins_back;
{
    case '0.10':
    if(num_coins1>0)
    cout<<"bal. 1*10"<<endl;
    num_coins1--;
    else
    break;
    case '0.20':
    if(num_coins2>0);
    cout<<"bal. 1*20"<<endl;
    num_coins2--;
    else
    cout<<"bal. 2*10"<<endl;
    num_coins1=num_coins1-2;
    case '0.30':
    if(num_coins1>0 && num_coins2>0)
    cout<<"bal. 1*20 1*10"<<endl;
    num_coins1--;
    num_coins2--;
    else
    cout<<"bal. 3*10"<<endl;
    num_coins1=num_coins1-3;


    case '0.40':
    if(num_coins2>0)
    cout<<"bal. 2*20"<<endl;
    num_coins2--;
    else
    cout<<"bal. 4*10"<<endl;
    num_coins1=num_coins1-4;

    case '0.50':
    if(num_coins3>0)
    cout<<"bal. 1*50"<<endl;
    num_coins3--;
    case '0.60':
    cout<<"bal. 1*50 1*10"<<endl;
    num_coins3--;
    num_coins1--;
    case '0.70':
    cout<<"bal. 1*50 1*20"<<endl;
    num_coins3--;
    num_coins2--;
    case '0.80':
    cout<<"bal. 1*50

}
