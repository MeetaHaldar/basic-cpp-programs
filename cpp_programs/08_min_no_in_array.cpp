#include <iostream>
using namespace std;
int main()
{
    int min = INT8_MAX;
    int a[4] = {1, 3, 4, -2};
    for (int i = 0; i < 4; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    cout << "in the array of a[4]={1,3,4,-2}" << endl
         << "min number is  = " << min;
    return 0;
}