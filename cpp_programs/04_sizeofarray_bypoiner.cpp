#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter the total number of element =";
    cin >> n;
    int *p = new int[n];
    cout << "size of your array is = " << sizeof p;
    delete[] p;
    cout << " enter the total number of element =";
    cin >> n;
    p = new int[n];
    cout << "size of your array is = " << sizeof p;

    return 0;
}