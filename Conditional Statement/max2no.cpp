#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int x, y;
    cout << "Enter 2 no: ";
    cin >> x >> y;
    if (x > y)
    {
        cout << x << " " << "is greater than" << " " << y << endl;
    }
    else
    {
        cout << y << " " << "is greater than" << " " << x << endl;
    }
    return 0;
}