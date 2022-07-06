#include <iostream>
using namespace std;
class meeta
{
public:
    void fun(const int &a, int &b)
    {
        // a++; constant value cant be change.
        b++;
        cout << a << "  " << b;
    }
};

int main()
{
    meeta m;
    int x = 10;
    int y = 3;
    m.fun(x, y);
}