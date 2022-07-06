#include <iostream>
using namespace std;
void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1); // it will call the last function and execute it.
        cout << n << endl;
    }
}
int main()
{
    int a = 10;
    fun(a);
    return 0;
}