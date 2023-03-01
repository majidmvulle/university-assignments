# include <iostream.h>
# include <cstring.h>

//using namespace std;

const int Top = 6;
int Nums[Top];

//Precondition: TRUE
//Postcondition: Prompts user with Prompt
//  AND Id = response to prompting
void Get_Int_From_Prompt(string Prompt,int i, int Num);

//Precondition: TRUE
//Postcondition: User prompted for values for array
// AND array set up with these values
void User_Set_Up_Array();

//Precondition: TRUE
//Postcondotion: array values printed to screen
void User_Print_Array();

//Precondition: TRUE
//Postcondition: Menu printed out
void Menu();

//Precondition: TRUE
//Postcondition: menu is printed and user is prompted
//repeatedly for option which is executed, until after
//exit option is encountered
void Main_Loop();

int main()
{
Main_Loop;
return 0;
}

//Precondition: TRUE
//Postcondition: Prompts user with Prompt
//  AND Id = response to prompting
void Get_Int_From_Prompt(string Prompt, int i, int Num)
{
cout<<Prompt<<i<<"==>";
cin>>Num;
}//Get_Int_From_Prompt;

//Precondition: TRUE
//Postcondition: User prompted for values for array
//  AND array set up with these values


