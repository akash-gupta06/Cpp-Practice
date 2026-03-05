#include <iostream>
using namespace std;
int main()
{
    int options, a, b, c;
    cout << "Menu\n";
    cout << "1.ADD\n"
         << "2.SUB\n";
    cout << "Choose the options ";
    cin >> options;
    cout << "Enter two integer numbers";
    cin >> a >> b;

    switch (options)
    {
    case 1:
        /* code */
        c = a + b;
        cout << c;
        break;
    case 2:
        /* code */
        c = a - b;
        cout << c;
        break;

    default:
        cout << "invalid";
        break;
    }
}