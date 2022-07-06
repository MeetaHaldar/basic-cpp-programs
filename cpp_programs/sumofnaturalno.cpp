#include <iostream>
using namespace std;
int main()
{
    int i, a, sum = 0;
    cout << "enter the number till you want sum = ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {

        sum += i;
    }
    cout << "the sum is = " << sum;
    return 0;
}