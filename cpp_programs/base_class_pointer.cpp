#include <iostream>
using namespace std;
class base
{
public:
    void fun1()
    {
        cout << "fun 1 from base class." << endl;
    }
};
class derived : public base
{
public:
    void fun2()
    {
        cout << "fun 2 from derievd class" << endl;
    }
};
int main()
{
    derived d;
    base *p = &d;
    p->fun1();
    // p->fun2(); itt will not execute.
    // d.fun1();
    // d.fun2();
    return 0;
}