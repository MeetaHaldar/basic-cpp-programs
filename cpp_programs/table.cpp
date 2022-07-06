#include <iostream>
using namespace std;
int main()
{
    int a, result;
    cout << "enter the number = ";
    cin >> a;
    for (int i = 1; i < 11; i++)
    {
        result = a * i;
        cout << a << "*" << i << " = " << result << endl;
    }
    return 0;
}