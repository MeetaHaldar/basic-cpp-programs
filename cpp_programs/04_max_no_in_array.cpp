#include <iostream>
using namespace std;
int main()
{
    int max = 0;
    int a[4] = {1, 3, 4, 2};
    for (int i = 0; i < 4; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "in the array of a[4]={1,3,4,2}" << endl
         << "max number is  = " << max;
    return 0;
}