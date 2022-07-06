#include <iostream>
using namespace std;
int t = 0;
class student
{
private:
    string student_name;
    int rollNo;
    int maths;
    int english;
    int science;

public:
    student(string n, int r, int m, int e, int s)
    {
        student_name = n;
        rollNo = r;
        maths = m;
        english = e;
        science = s;
    }

    int sum()
    {

        t = maths + english + science;
        return (t);
    }

    void grade()
    {
        if (t >= 90)
        {
            cout << "A";
        }
        else if (t >= 70 && t < 90)
        {
            cout << "B";
        }
        else if (t >= 50 && t < 70)
        {
            cout << "C";
        }
        else if (t >= 30 && t < 50)
        {
            cout << "D";
        }
        else
        {
            cout << "FAIL";
        }
    }
};

int main()
{
    string name;
    int roll, mat, eng, sci;
    cout << " enter student name = ";
    cin >> name;
    cout << "enter roll number = ";
    cin >> roll;
    cout << "enter the marks of english = ";
    cin >> eng;
    cout << "enter the marks of maths = ";
    cin >> mat;
    cout << " enter the marks of science = ";
    cin >> sci;

    student s(name, roll, mat, eng, sci);
    int k = s.sum();
    cout << "student name = " << name << endl
         << "student roll number =" << roll << endl;
    cout << "your total marks = ";
    cout << k << endl;
    cout << "the total grade is = ";
    s.grade();
    return 0;
}