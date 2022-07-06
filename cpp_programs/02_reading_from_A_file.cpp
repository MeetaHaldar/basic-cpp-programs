#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream ifs("meeta.txt");
    if (ifs)
        cout << "file is open" << endl;

    string str;
    int a;
    ifs >> str >> a;
    ifs.close();
    cout << str << endl;
    cout << a;
}
