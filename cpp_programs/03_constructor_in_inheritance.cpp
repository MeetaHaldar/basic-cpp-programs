#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "non paramterized base";
    }

    base(int x)
    {
        cout << "parameterized base = " << x;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "non parameterized derived ";
    }
    derived(int y)
    {
        cout << "parameterized derived = " << y;
    }

    derived(int x, int y) : base(x)
    {
        cout << " derived parameterized = " << y;
    }
};
int main()
{
    derived d(10, 5);

    return 0;
}