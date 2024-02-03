#include<iostream>
using namespace std;
class Add                 //class class_name
{
    int a,b;             //private data members
    public:
    Add(int i,int j)    //constructor to initialize the numbers
    {
        a=i;
        b=j;
    }
    int sum()           //function to perform addition
    {
        return a+b;
    }
};
int main()
{
    Add s(2,3);          //creating the oblject
    cout<<"sum of a+b is:"<<s.sum();   //calling the function
    return 0;
}