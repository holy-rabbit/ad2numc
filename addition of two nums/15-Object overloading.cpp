#include <iostream>
using namespace std;
class loc                                //class and class_name
{
    int longitude,latitude;             //local variable declaration
    public:
    loc(){}                            //Default constructor
    loc(int lg,int lt)                 //Parameterized constructor
    {
        longitude=lg;
        latitude=lt;
    }
void show()                           //function defination
{
    cout<<longitude<<""<<endl;
    cout<<latitude<<endl;
}
loc operator+(loc op2);
loc operator-(loc op2);
};
loc loc::operator+(loc op2)             //scope resolution operator
{
    loc temp;
    temp.longitude=op2.longitude+longitude;
    temp.latitude=op2.latitude+latitude;
    return temp;
}
loc loc::operator-(loc op2)
{
    loc temp;
    temp.longitude=longitude-op2.longitude;
    temp.latitude=latitude-op2.latitude;
    return temp;
}
int main()
{
    loc ob1(10,20),ob2(15,20);
    ob1.show();
    ob2.show();
    ob1=ob1+ob2;
    ob1.show();
    return 0;
}