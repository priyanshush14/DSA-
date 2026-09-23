#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int count = 64;
    for (int i = 1; i <= n; i++)
    {
        int copy = count + n;
        for (int j = 1; j <= i; j++)
        {
            cout << char(copy);
            cout << " ";
            copy++;
        }
        count--;

        cout << endl;
    }
    return 0;
}