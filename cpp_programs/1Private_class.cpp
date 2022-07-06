#include <iostream>
using namespace std;
class meeta
{

    int age;
    int roll;
    int weight;
    char name;

public:
    void setAge(int a)

    {
        age = a;
    }
    int getAge()
    {

        return age;
    }
};
int main()
{
    int b;
    meeta m1;
    cout << "enetr age = ";
    cin >> b;
    m1.setAge(b);
    // m1.setAge(12);
    // int k = m1.getage(12);
    cout << m1.getAge();
    return 0;
}