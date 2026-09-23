#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int alpha = 65;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j != i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (k == 1)
            {
                alpha;
            }
            else if (k <= i)
            {
                alpha++;
            }
            else
            {
                alpha--;
            }
            cout << char(alpha);
        }
        cout << endl;
    }

    return 0;
}