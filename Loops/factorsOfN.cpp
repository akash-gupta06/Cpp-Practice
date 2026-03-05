#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter n  ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            /* code */
            cout << i << endl;
        }
    }

    return 0;
}