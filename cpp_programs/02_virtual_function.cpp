#include <iostream>
using namespace std;
class base
{
public:
  virtual  void fun()
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
    d = new derive();
    d->fun();
    // d.fun();
    return 0;
}