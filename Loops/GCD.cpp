#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter two numbers  ";
    cin >> m >> n;
    while (m != n)
    {
        /* code */
        if (m > n)
        {
            /* code */
            m = m - n;
        }
        else if (n > m)
        {
            /* code */
            n = n - m;
        }
    }
    cout << "GCD is  " << m << endl;

    return 0;
}