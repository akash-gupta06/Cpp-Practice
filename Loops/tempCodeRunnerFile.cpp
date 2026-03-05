#include <iostream>
using namespace std;
int main()
{
    int n, r, reverse = 0, m;
    cout << "Enter n  ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        /* code */
        r = n % 10;
        n = n / 10;
        reverse = reverse * 10 + r;
    }

    cout << reverse << endl;
    if (m == reverse)
    {
        /* code */
        cout << "Number is Palindrome";
    }
    else
    {
        cout << "Not a Plaindrome";
    }

    return 0;
}