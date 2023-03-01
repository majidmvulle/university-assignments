#include <iostream.h>
#include <math.h>
//#include <string.h>
//using namespace std;
//void scan_data(char& oper, double& num);
//double do_next_op(double num,char oper, double result);




void scan_data(char& oper, double& num)
{

     cin>>oper;
     cin>>num;
     return;
}

double do_next_op(double num,char oper, double result)
{
       result = 0;
       switch (oper)
       {

              case '+':
              result = result+num;
              break;
              case '-':
              result = result-num;
              break;
              case '*':
              result = result*num;
              break;
              case '/':
              result = result/num;
              break;
              case '^':
              result = pow(result, num);
              break;
              case 'q':
              cout<<"final result is "<<result;
              break;
              default: cout<<"invalid operator"<<endl;

              }
              return result;
}

//void display_result(string prompt, double total)
//{
  //   cout<<prompt<<total<<endl;
    // return;
//}
int main()
{
    char oper;
    double num;
    double result;
    double total = 0;
    scan_data(oper, num);

    while(oper !='q')
    {
               total = do_next_op(num, oper, result);
               //display_result("result so far is", total);
               cout<<"result so far is "<<total<<endl;
               scan_data(oper, num);
    }
    return 0;
}





