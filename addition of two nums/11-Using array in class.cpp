#include <iostream>
using namespace std;
class Add  
{                               //class and class name 
    public:
    int ar[5],i,total=0;                  //local variables
    int Sum()                             //function defination               
    {
        total=0;
        cout<<"enter array of elements"<<endl;
        for(i=0;i<=4;i++)
        {
            cin>>ar[i];
            total=total+ar[i];
        }
        cout<<"Sum of elements:"<<total;
    }
};
int main()
{
    Add a;
    cout<<a.Sum();
}
