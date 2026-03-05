#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int a, b, c;
    cout << "enter 3 nos";
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << a;
    else if (b > c)
        cout << b;
    else
        cout << c;

    return 0;
}