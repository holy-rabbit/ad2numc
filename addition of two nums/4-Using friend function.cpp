#include<iostream>
using namespace std;
class Add                //class class-name
{
    int a,b;             //private date members
    public:              //access specifiers
    Add(int x,int y)     //function defination
    {
        a=x;
        b=y;
    }
    friend int sum(Add s);   //declaration of friend function
};
int sum(Add s)              //defination of function
{
    return s.a+s.b;
}
int main()
{
    Add c(2,3);
    cout<<"sum of a+b is:"<<sum(c)<<"\n";   //calling friend function
}
