#include<iostream>                   //pre processor directives
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
                //function prototype
int main()
{
    cout<<"sum of a+b is:"<<sum(2,3);  //function call
    return 0;
}
