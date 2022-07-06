#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 3, b = 4;
    cout << "before passing the value" << endl
         << "a=" << a << endl
         << "b=" << b << endl;
    swap(a, b);
    cout << "after passing the value" << endl
         << "a=" << a << endl
         << "b=" << b << endl;
    return 0;
}