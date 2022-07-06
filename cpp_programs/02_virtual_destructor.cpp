#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "this is base class constructor." << endl;
    }
    virtual ~base()
    {
        cout << "this is base class destructor ." << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "this is derived class constructor ." << endl;
    }
    ~derived()
    {
        cout << "this is derived class destructor" << endl;
    }
};
void fun()
{
    base *p = new derived();
    delete p;
}
int main()
{
    fun();
}