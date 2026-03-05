#include <iostream>
using namespace std;
int main()
{
    int n, r, reverse = 0;
    cout << "Enter n  ";
    cin >> n;
    while (n > 0)
    {
        /* code */
        r = n % 10;
        n = n / 10;
        reverse = reverse * 10 + r;
    }

    cout << reverse;

    return 0;
}