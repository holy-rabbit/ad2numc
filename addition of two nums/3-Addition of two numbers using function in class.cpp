#include<iostream>
using namespace std;
class Add                          //class class_name
{
    public:                       //access specifiers
    int sum(int a,int b)          //function defination
    {
        return a+b;
    }
};
int main()
{
    Add a;                       //creating object using class
    cout<<"sum of a+b is:"<<a.sum(2,3)<<"\n";
}
