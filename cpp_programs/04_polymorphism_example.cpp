#include <iostream>
using namespace std;
class car
{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class bmw : public car
{
public:
    void start()
    {
        cout << "BMW started . " << endl;
    }
    void stop()
    {
        cout << " BMW stopped .";
    }
};
class audi : public car
{
public:
    void start()
    {
        cout << "Audi started . " << endl;
    }
    void stop()
    {
        cout << " Audi stopped .";
    }
};
int main()
{

    car *p = new bmw();
    p->start();
    p->stop();
// one pointer of base class can point on both derived classes .
    p = new audi();
    p->start();
    p->stop();
    // q->start();
    // q->stop();
    return 0;
}