#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r;
    {
        r.length = 20;
        r.breadth = 30;
    };
    cout << "the length of the rectangle is = " << r.length << endl;
    cout << "parameter of the rectangle is = " << r.length * r.breadth << endl;
    return 0;
}