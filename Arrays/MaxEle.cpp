#include <iostream>
using namespace std;
int main()
{
    int A[5] = {34, 56, 99, 44, 88};
    int max;
    max = A[0];

    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (A[i] > max)
        {
            /* code */
            max = A[i];
        }
    }

    cout << "Maximum numbver is  " << max;
}