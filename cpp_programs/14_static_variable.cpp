#include <iostream>
using namespace std;
// Static variables
// • They have local scope but remain in memory through out  the execution of program
// • They are created in code section
// • They are history - sensitive 
void fun()
{
    static int v = 0; //the value of v will bw remain same. it has only one feature of global variable.
    int a = 10;
    v++;
    cout << "a =  " << a << "  and   v = " << v << endl;
}
int main()
{
    cout << " applying first time fun " << endl;
    fun();
    cout << " applying second time fun " << endl;
    fun();
    cout << " applying third time fun " << endl;
    fun();
    cout << " applying fourth time fun " << endl;
    fun();
    return 0;
}