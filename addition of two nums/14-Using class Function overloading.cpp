#include <iostream>
using namespace std;
class Add                                    //class and class_name
{
    public:
    int sum(int a,int b)                     //function defination
    {
        return a+b;
    }
    double sum(double a,double b)             //function defination
    {
        return a+b;
    }
};
int main()
{
    Add a;
    cout<<"sum of a+b is:"<<a.sum(2,3)<<endl;     //function call
    cout<<"sum of a+b is:"<<a.sum(2.1,3.1)<<endl;
}