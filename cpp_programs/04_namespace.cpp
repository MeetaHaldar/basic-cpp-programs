#include <iostream>
using namespace std;
namespace first
{
    void fun()
    {                     
        cout << " it is the fuction of first namespace."<<endl;
    }
}
namespace second
{
    void fun()
    {
        cout << "it is the fuction of second namespace."<<endl;
    }
}
using namespace first;
int main()
{
    fun();
    second::fun();
    return 0;
}