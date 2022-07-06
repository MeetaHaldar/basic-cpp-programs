#include <iostream>
using namespace std;
class test
{
public:
    int a;
    static int count;

    test()
    {
        a = 10;
        count++;
    }
    static int getcount()
    {
        return count;
    }
};

int test ::count = 0;
int main()
{
    test t1, t2;
    t1.count = 3;
    t2.count = 5;
    cout << t1.count << endl
         << t2.count << endl
         << test::getcount << endl
         << t1.a;
}
