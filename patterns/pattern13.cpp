#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        int count = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << (char)count;
            count++;
        }
        cout << endl;
    }
    return 0;
}