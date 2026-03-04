#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int x = 5, y = 10, z;
    // z = ++x + y;//pre
    z = x++ + y; // post
    cout << z;
    return 0;
}