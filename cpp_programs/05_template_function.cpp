#include <iostream>
using namespace std;

template <class M>
M maxim(M a, M b)
{
    return a > b ? a : b;
}

int main()
{
    cout << maxim(2, 5) << endl;
    cout << maxim(3.4f, 2.5f) << endl;
    cout << maxim(3.4, 2.5);
    return 0;
}