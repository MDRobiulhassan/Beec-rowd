#include <iostream>
using namespace std;

int main()
{
    int n, a[5], b[5], i, j = 0;

    for (i = 0; i < 15; i++)
    {
        cin >> n;
        if (n % 2 == 0)
            cout << "par[" << j << "] = " << n << endl;
        else if (n % 2 != 0)
            cout << "impar[" << j << "] = " << n << endl;
        j++;
        if (j == n)
            j = 0;
    }

    return 0;
}
