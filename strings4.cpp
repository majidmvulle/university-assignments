# include <iostream>
using namespace std;
int main()
{
     char a_string[15];
     int len;
     int vowels= 0;
     int consonants = 0;
     cout<<"Enter your name ==>";
     cin>>a_string;
     len = strlen(a_string);
     cout<<a_string<<"="<<len<<"characters\n";
     for(int i=0;i<len;i++)
     {
                       switch(a_string[i])
                       {
                         case 'a': case 'e': case 'i': case 'o': case 'u': vowels++;break;
                         default: consonants++;
                         }
      }
    //vow = strvow(a_string);
     //cons = strcons(a_string);
     
     cout<<"Vowels are "<<vowels<<" characters\n";
     cout<<"Consonants are "<<consonants<<" characters\n";
     //cout<<a_string<<"="<<vow<<"characters\n";
     //cout<<a_string<<"="<<cons<<"characters\n";
     system("pause");
     return 0;
     
}
