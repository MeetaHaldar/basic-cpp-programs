#include <iostream>
using namespace std;
// passing by address or call by address.
void swap(int *x, int *y)
{ int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 1, b = 2;
    cout << "before passsing the value" << endl
         << "a=" << a << endl
         << "b=" << b << endl;
    swap(&a, &b);
    cout << "after passing the value" << endl
         << "a=" << a << endl
         << "b=" << b << endl;
    return 0;
}