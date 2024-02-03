#include<iostream>
using namespace std;
class Myclass
{
    public:
    friend int sum(int a,int b);
};
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    cout<<"sum of a+b is:"<<sum(2,3)<<"\n";
    return 0;
}