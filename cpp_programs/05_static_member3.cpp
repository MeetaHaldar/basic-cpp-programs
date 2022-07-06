#include <iostream>
using namespace std;
class student
{
public:
    int roll;
    string name;
    static int admin;

    student(string n)
    {
        name = n;
        admin++;
        roll = admin;
        cout << "name = " << name << endl
             << "roll = " << roll << endl
             << "admin= " << admin << endl;
    }
    static int getadmin()
    {
        return admin;
    }
};
int student::admin = 0;
int main()
{
    student s1("meeta");
    student s2("ved");
    student s3("tarang");
    student s4("himu");
    student s5("manu");

    cout << student::getadmin() << endl
         << s1.getadmin();
}