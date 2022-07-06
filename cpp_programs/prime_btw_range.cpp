#include <iostream>
using namespace std;
int main()
{
    int r = 0, p, n, count = 0, m = 0;
    cout << "enter your first range  = ";
    cin >> n;
    cout << "enter your last range = ";
    cin >> p;
    // m = p - n;
    for (int i = n; i <= p; i++)

    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << endl;
        }
    }

    return 0;
}
