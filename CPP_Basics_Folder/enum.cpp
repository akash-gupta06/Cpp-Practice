#include <iostream>
using namespace std;

enum dept
{
    cs,
    it,
    ece,
    ee,
    mech,
    civil,
    chem,
    meta,
    min,
    bme,
    bt
};

int main()
{

    dept d;
    d = cs;
    cout << d;

    return 0;
}