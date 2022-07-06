// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout << "enter your number = ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     cout << "the sum is = " << sum;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
   int n,r;
   
    cout << "Enter a no. ";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r << " ";
    }
    cout << endl;
}