#include <iostream>
using namespace std;
int add(int x, int y)
{
    int c;
    c = x + y;
    return c;
}
int main()
{
    int a = 2, b = 6, c;
    c = add(a, b);
    cout<<c<<endl;
    return 0;
}