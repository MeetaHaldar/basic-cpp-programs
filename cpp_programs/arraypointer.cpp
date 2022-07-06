#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter your no. = ";
        cin >> p[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "your elements are :- "

             << *(p + i) << endl;
    }
// p[i]=*(p+i)
    return 0;
}