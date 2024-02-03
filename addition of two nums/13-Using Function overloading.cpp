#include <iostream>
using namespace std;
int sum(int a, int b);                      //function prototype
double sum (double a, double b);            //differ in types of parameters
int main()
{
    cout<<"sum of a+b is:"<<sum(1,2)<<endl;
    cout<<"sum of a+b is:"<<sum(1.2,4.5)<<endl;    //function call
    return 0;
}
int sum(int a,int b)                              //function defination
{
    return a+b;
}
double sum(double a, double b)                    //function defination
{
    return a+b;
}
