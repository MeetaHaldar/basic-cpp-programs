#include <iostream>
using namespace std;
int main()
{
    int arr[100], sum;
    int a, i, average;
    cout << "enter the number of elements = " << endl;
    cin >> a;
    while (a > 100 || a < 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> a;
    }

    for (i = 0; i < a; i++)

    {
        cout << i + 1 << ". enter the element or number = ";
        cin >> arr[i];
        sum = arr[i];
        sum += arr[i];
    }

    average = sum / a;
    cout << "the average of number is = " << average << endl;
    return 0;
}