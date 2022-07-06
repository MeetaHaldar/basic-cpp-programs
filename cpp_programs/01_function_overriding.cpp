#include <iostream>
using namespace std;
class base
{
public:
    void fun()
    {
        cout << "display of base .";
    }
};
class derive : public base
{
public:
    void fun()
    {
        cout << "display of derive .";
    }
};
int main()
{
    base *d;
    derive b;
    d = &b;
    d->fun();
    // d.fun();
    return 0;
}