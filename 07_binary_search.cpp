#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1,
                 2,
                 3,
                 4,
                 5,
                 6,
                 7,
                 8,
                 9,
                 10};
    int l = 0,
        h = 9, key, mid = 0;

    cout << " enter key value = ";
    cin >> key;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "the key is at index  = " << mid;
            return 0;
        }
        else if (key < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "element not found";
    return 0;
}