#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter your numbers" << endl;
    cout << "a= ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << a << "= a is the largest number among them";
    }

    else if (b > a && b > c)
    {
        cout << b << " = b is the largest number among them";
    }
    else
    {
        cout << c << " = c is the largest number among them";
    }

    return 0;
}