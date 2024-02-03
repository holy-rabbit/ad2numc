#include <iostream>
using namespace std;
class Add
{
    public:
    int sum(int a,int b)              //function defination
    {
        return a+b;
    }
};
int main()
{
    Add A;
    int a,b;                            //local variable declaration               
    int *ptr1=&a,*ptr2=&b;              //initialisation and declaration of pointers 
    cout<<"sum of a+b is:"<<A.sum(2,3);   
    return 0;
    
}