#include <iostream>
using namespace std;
int main()
{
    int A[5] = {3, 5, 7, 9, 10};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += A[i];
    }

    cout << "Sum is " << sum;
}