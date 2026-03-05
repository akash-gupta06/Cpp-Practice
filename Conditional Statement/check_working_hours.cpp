#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter time ";
    cin >> n;
    if (n >= 9 && n <= 17)
    {
        cout << "its a working hour";
    }
    else
    {
        cout << "not a working hours";
    }
    return 0;
}