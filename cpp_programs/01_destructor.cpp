#include <iostream>
using namespace std;
class demo
{
    int *p;

public:
    demo()
    {
        p = new int[10];
        cout << "this is a constructor." << endl;
    }
    ~demo()
    {
        delete[] p;
        cout << "this is a destructor .";
    }
};
void fun()
{
    // demo d;
    /*when an object is created then it will automatically generate a constructor 
  and destructor .*/
    demo *p = new demo();
    //after this line only constructor will operate because heap memory creates dynamic object
    //to operate destructor we should write
    delete p;
    //now it will operate both .
}
int main()
{
    fun();
}