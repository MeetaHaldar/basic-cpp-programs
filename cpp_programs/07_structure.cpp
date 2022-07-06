#include <iostream>
using namespace std;

struct meeta
{
    int x;
    int y;

    void fun()
    {
        cout << x << "" << y;
    }
};
int main()
{
    meeta m;
    m.x = 2;
    m.y = 5;
    m.fun();
    return 0;
}