#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    string name;

public:
    // void setId(int i)
    // {
    //     id = i;
    // }
    // void setName(int n)
    // {
    //     name = n;
    // }

    employee(int i, string n)
    {
        name = n;
        id = i;
    }

    string getName()
    {
        return name;
    }

    int getId()
    {
        return id;
    }
};
class fulltimemployee : public employee
{
    int sallary;

public:
    fulltimemployee(int i, string n, int sall = 0) : employee(i, n)
    {
        sallary = sall;
    };
    int getSallery()
    {
        return sallary;
    }
    void sal(int sallary)
    {
        cout << "the name of full-time client is = " << getName() << endl
             << " the id of the client is = " << getId() << endl;
        cout << "full time sallery is= " << sallary;
    }
};
class parttimeployee : public employee
{
private:
    int wage;

public:
    parttimeployee(int i, string n, int w = 0) : employee(i, n)
    {
        wage = w;
    };

    int getwage()
    {
        return wage;
    }
    void daily(int daily_wages)
    {
        cout << "the name of part-time client is = " << getName() << endl
             << " the id of the client is = " << getId() << endl;
        cout << " yourdaily wages is = " << daily_wages;
    }
};

int main()
{
    fulltimemployee f(10, "kiku", 900);
    f.sal(900);
    // f.setId(10);
    // f.setName('meeta');
    // employee f(10, 'meeta');
    // f.sal(1000);
    return 0;
}