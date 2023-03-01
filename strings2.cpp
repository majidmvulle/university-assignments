# include <iostream>
using namespace std;
int main()
{
     char a_string[15];
     int len;
     cout<<"Enter your name ==>";
     cin>>a_string;
     len = strlen(a_string);
     cout<<a_string<<"="<<len<<"characters\n";
     return 0;
     system("pause");
}
