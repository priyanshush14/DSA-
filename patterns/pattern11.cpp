#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int start;

    for (int i = 0; i != n; i++)
    {
        if (i % 2 == 1)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";

            start = 1 - start;
        }
        cout << endl;
    }
    return 0;
}