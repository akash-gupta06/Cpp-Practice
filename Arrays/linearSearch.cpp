#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cout << "Enter the size of an Array:  " << endl;
    cin >> n;
    int A[n];
    cout << "Enter the  " << n << "Elements of an Array" << endl;

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> A[i];
    }

    cout << "Enter the Key:  ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (A[i] == key)
        {
            /* code */
            cout << "Found at index  " << i;
            return 0;
                }
    }

    cout << "Not found";
}