#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b;
    // b = ++a;
    // cout << "after preincrement a is = " << a << endl;
    // cout << "after preincrement b is = " << b<<endl;
    // b = a++;
    // cout << "after postincrement a is = " << a << endl;
    // cout << "after postincrement b is = " << b;
    // b = 2 * a++ + 2 * ++a;
    // b = 2 * a++ + 2 * a++;
    // for (int i = 0; i < 3; i++)
    // {
    //     b = (2 * ++a);
    //     cout << b << " += "
    //          << "2*" << a << endl;
    // }

    // b = 2 * a++ + 2 * a++ + 2 * a++;
    b = (2 * (++a)) + (2 * (++a)) + (2 * (++a));
    cout << "b = " << b << endl
         << "a = " << a;

    return 0;
}