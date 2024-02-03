#include<iostream>
using namespace std;
inline int sum(int a,int b);            //inline function prototype
int main()
{
    cout<<"sum of a+b is:"<<sum(2,3);   //function call
}
inline int sum(int a,int b)            //inline function defination
{
    return a+b;
}