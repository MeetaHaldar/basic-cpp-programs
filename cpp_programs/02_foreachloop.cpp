#include <iostream>
using namespace std;
int main()
{
    int a[4] = {2, 4, -5, 2*6};
    for (auto x : a) //here we are changing the value of x
    //  which is the copy of original value .so only the value of x
    //   will change it will not effect its original value
    {
        x++;
        cout << x << endl;
    }
    return 0;
}
// int main()
// {
//     int a[4] = {2, 4, 5, 6};
//     for (auto &x : a) //here '&' is showing the another name of a
//                       //  so if we change anything in x then it will automatically cange its original value.
//     {
//         x++;
//         cout << x << endl;
//     }
// }