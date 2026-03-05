#include <iostream>
using namespace std;
int main()
{
    int i, n, count = 0;
    cout << "Enter n  ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << n << "  is a Prime Number "; /* code */
    }
    else
        cout << n << "  is not a Prime Number ";

    return 0;
}