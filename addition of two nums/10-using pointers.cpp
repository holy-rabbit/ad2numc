#include<iostream>
using namespace std;
int Add(int a,int b);               // function prototype
int main()
{
    int a,b;                        //local variable declaration
    int *ptr1=&a,*ptr2=&b;          //initialisation and declaration of pointers
    cout<<"sum of a+b is:"<<Add(2,3);   //function call
    return 0;
}
int Add(int a,int b)                 //function defination
{
    return a+b;
}
