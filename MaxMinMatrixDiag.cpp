#include <iostream>
#include <iomanip>

/*
This programme accepts a matrix of dimension N x N and first prints it out. Then it 
proceeds to find the max nad min of both the main diagonal and secondary diagonal
 */

using namespace std;

int main()
{
    int n, maxGl, minGl, maxSp, minSp;
    do
    {
        cout << "Enter n: ";
        cin >> n;
    } while (n < 1 && n > 10);

    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(6) << A[i][j];
        }
        cout << endl;
    }

    maxGl = A[0][0];
    minGl = A[0][0];
    maxSp = A[0][0];
    minSp = A[0][n - 1];

    for (int i = 0; i < n; i++)
    {

        if (A[i][i] > maxGl)
        {
            maxGl = A[i][i];
        }
        else if (A[i][i] < minGl)
        {
            minGl = A[i][i];
        }

        if (A[i][n - 1 - i] > maxSp)
        {
            maxSp = A[i][n - 1 - i];
        }
        else if (A[i][n - 1 - i] < minSp)
        {
            minSp = A[i][n - 1 - i];
        }
    }

    cout << "Max of the main diagonal: " << maxGl << endl;
    cout << "Min of the main diagonal: " << minGl << endl;
    cout << "Max of the secondary diagonal: " << maxSp << endl;
    cout << "Min of the secondary diagonal: " << minSp;
    return 0;
}
