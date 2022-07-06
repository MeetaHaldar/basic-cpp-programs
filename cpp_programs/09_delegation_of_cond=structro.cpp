#include <iostream>
using namespace std;
class test
{
    int x;
    int y;

public:
    test(int a, int b)
    {
        x = a;
        y = b;
    }
    test() : test(1, 1)
    {
        cout << "sum is = " << x + y;
    }
};
int main()
{
    test();
}