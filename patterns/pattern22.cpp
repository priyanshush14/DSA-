#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = n; i >= 1; i--)
    {
        int copy = n;
        for (int k = 2; k <= n - i + 1; k++)
        {
            cout << copy;
            copy--;
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << i;
        }
        int s = i + 1;
        for (int k = 2; k <= n - i + 1; k++)
        {
            cout << s;
            s++;
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        int copy = n;
        for (int k = 2; k <= n - i + 1; k++)
        {
            cout << copy;
            copy--;
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << i;
        }
        int s = i + 1;
        for (int k = 2; k <= n - i + 1; k++)
        {
            cout << s;
            s++;
        }
        cout << endl;
    }
}