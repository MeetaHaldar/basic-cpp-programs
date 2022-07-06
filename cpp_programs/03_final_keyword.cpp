#include <iostream>
using namespace std;
class meeta //final  //final class can not inhereted
{
public:
    virtual void display() //also the final virtual function can not be override.
    {
    }
};

class haldar : public meeta
{
public:
    void display()
    {
        cout << " this is haldar class.";
    }
};
int main()
{
    haldar m;
    m.display();
    return 0;
}