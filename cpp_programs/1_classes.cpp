#include <iostream>
using namespace std;
class meeta
{

public:
    int age;
    int roll;
    int weight;
    char name;

    void fun()
    {
        cout << "hey";
    }
};
int main()
{
    meeta m1;
    // m1.age = 12;
    // m1.roll = 2;
    cout << "enter your roll";
    cin >> m1.roll;
    m1.weight = 23;
    m1.name = 'm';
    cout << m1.roll;
    // m1.fun();
    return 0;
}