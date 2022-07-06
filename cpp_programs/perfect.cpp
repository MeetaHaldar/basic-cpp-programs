#include <iostream>
using namespace std;
int main()
{
    int a, i, sum = 0;
    cout << "enter your number = ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {

            sum += i;
        }
    }

    if ((2 * a) == sum)
    {
        cout << "your number is a perfect number";
    }
    else
    {
        cout << "your number is not perfect number";
    }
    return 0;
}
