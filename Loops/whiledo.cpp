#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enetr n";
    cin >> n;
    // using while
    /* while (i <= n)
     {
         cout << i << endl;
         i++;
     }
         */
    // using do

    do
    {
        /* code */
        cout << i << endl;
        i++;
    } while (i <= n);
}