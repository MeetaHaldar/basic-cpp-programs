#include <iostream>
using namespace std;
class basicCar
{
public:
    virtual void fun()
    {
        cout << " this is a basic car";
    }
};
class advanceCar :public basicCar
{
public:
void fun()
{
    cout<<" this is a advance car.";
}
};

int main()
{
    basicCar *p=new advanceCar ();
    p->fun();
    return 0;
}
