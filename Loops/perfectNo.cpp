#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter n  ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            /* code */
            sum += i;
        }
        if (2 * n == sum)
        {
            cout << "The number  " << n << "  is a Perferct No ";
        }
    }

    return 0;
}