# include <iostream.h>
int main()
{
char symbol[3] = {'a', 'b', 'c'};

for (int index = 0; index<3; index++)
cout<<symbol[index];
double a[3] = {1.1, 2.2, 3.3};
cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
a[1] = a[2];
cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
return 0;
}