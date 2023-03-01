# include <iostream>
# include <string>
using namespace std;

int main()
{
    char a_string[10];
    char b_string[] = "good afternoon";
    char c_string[4] = {'h','e','l','p'}; //array of chars
    char d_string[2][15] = {"U08004" , "CSC 285"}; //array of string
    string e_string = "good morning";
    string f_string[2] = {"U08004", "CSC 285"};
    string h_string;
    
    //a_string = "hello"; illegal
    // use:
           strcpy(a_string, "hello");
           
    cout<<a_string<<endl;                            //output
    cout<<"first character ==>" <<a_string[0]<<endl;  //output
    cout<<b_string<<endl;                            //output
    //cout<<c_string<<endl;                             //wrong output
    //cout<<d_string<<endl;                              //wrong output
    cout<<e_string<<endl;                             //output
    //cout<<f_string<<endl;                                //wrong output
    cout<<"first character ==>"<<e_string[0]<<endl;    //output
    h_string = "goodbye";
    cout<<h_string<<endl;                                 //output

return 0;
///system("pause");
}
