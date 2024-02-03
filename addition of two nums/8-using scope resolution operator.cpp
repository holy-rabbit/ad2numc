#include<iostream>
using namespace std;
class Add           
{
    public:
    int sum(int a,int b);
};
int Add::sum(int a,int b)     //scope resolution operator
{
    return a+b;
}
int main()
{
    Add s;
    cout<<"sum of a+b is:"<<s.sum(2,3);
}