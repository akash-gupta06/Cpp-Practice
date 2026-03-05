#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    switch (x)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;

    default:
        cout << "invalid no";
        break;
    }
}