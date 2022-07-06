#include <iostream>
using namespace std;
int main()
{
    int n, m, count = 0, result, product = 0;
    // cout << "enter digit no = ";
    // cin >> m;
    cout << "enter your number = ";
    cin >> n;
    m = n;

    // for (int i = 1; i <= m; i++)
    // {
    //     result = n % 10;
    //     n = n / 10;
    //     cout << result;
    // }
    // while (n > 0)
    // {

    //     n = n / 10;
    //     count++;
    // }
    // cout << count;
    while (n != 0) //(n < 0 || n > 0)
    {
        result = n % 10;
        n = n / 10;
        result = result * result * result;
        // product = product * 10 + result;
        product += result;
    }
    // cout << product;
    if (product == m)
    {
        cout << "it is amstrong number";
    }
    else
    {
        cout << "it is not a amstrong number";
    }

    return 0;
}