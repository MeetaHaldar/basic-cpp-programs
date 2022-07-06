#include <iostream>
using namespace std;
class meeta

{

    int age;
    int roll;
    int weight;
    string name;

public:
    meeta(int a,
          int r,
          int w,
          string n)
    {
        age = a;
        roll = r;
        weight = w;
        name = n;
    }
    void fun()
    {
        cout << "your name = " << name << endl;
        cout << "your roll no. = " << roll << endl;
    }
};

int main()
{
    meeta m1(21, 2, 23, "mita");
    m1.fun();
    return 0;
}
