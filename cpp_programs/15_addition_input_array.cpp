#include <iostream>
using namespace std;
int main()
{
    int m, n;

    cout << " enter the number of row = ";
    cin >> m;

    cout << "enter the number of column = ";
    cin >> n;

    int A[m][n], B[m][n], C[m][n];
    cout << " for the matrix of A:";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " enter the element of A  "
                 << "(" << i << j << ")"
                 << " =";
            cin >> A[i][j];
        }
    }

    cout << " for the matrix of B:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " enter the element of B = "
                 << "(" << i << j << ")"
                 << " =";
            cin >> B[i][j];
        }
    }
    cout << " addition of the two matrices is " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] + B[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}