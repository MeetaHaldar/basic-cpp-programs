#include <iostream>
using namespace std;
int fun(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)

        if (a[i] == key)
            return i;
}
int main()
{
    int key;
    int a[7] = {2, 5, 4, 3, 7, 8, 0};
    cout << " enter the key element to be find = ";
    cin >> key;
    int b = fun(a, 7, key);
    cout << "your key element is at index = " << b;
    return 0;
}