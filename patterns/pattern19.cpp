#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 2; k <= (2 * i - 1); k++)
        {
            cout << " ";
        }
        for (int l = n - i + 1; l >= 1; l--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 2; k <= (2 * i - 1); k++)
        {
            cout << " ";
        }
        for (int l = n - i + 1; l >= 1; l--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}