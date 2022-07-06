#include <iostream>
using namespace std;

int &fun(int &x)
{
    return x;
}

int main()

{
    int a = 6;
    fun(a);
    cout << " a = " << a;
    return 0;
}