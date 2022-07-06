#include <iostream>
using namespace std;
int main()
{
    int a, i, result = 1;
    cout << "enter the number for factorial = ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {

        result *= i;
    }

    cout << "your result is = " << result;
    return 0;
}