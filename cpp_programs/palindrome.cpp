#include <iostream>
using namespace std;
int main()
{
    int n, m, count = 0, result, product = 0;
    cout << "enter your number = ";
    cin >> n;
    m = n;

    while (n != 0) //(n < 0 || n > 0)
    {
        result = n % 10;
        n = n / 10;
        product = product * 10 + result;
    }
    if (product == m)
    {
        cout << "the number is palendrome.";
    }
    else
        cout << "the number is not a palendome.";
    return 0;
}