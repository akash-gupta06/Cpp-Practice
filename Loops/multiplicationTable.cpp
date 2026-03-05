#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enetr n  ";
    cin >> n;

    for (i = 1; i <= 10; i++)
    {
        /* code */
        cout << n << "*" << i << "=" << i * n << endl;
        }

    return 0;
}