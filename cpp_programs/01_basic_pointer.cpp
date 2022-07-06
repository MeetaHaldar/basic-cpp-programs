#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout << "a = " << a << endl;
    cout << " &a =  " << &a << endl;
    cout << "p =" << p << endl;
    cout << "*p = " << *p << endl;
    cout << "&P = " << &p;
    return 0;
}