#include <iostream>
using namespace std;
/*int main()
{
    string str;
    cout << "May i know your name? Aka";
    cin >> str;
    cout << "hello " << str << endl;

    return 0;
}*/
int main()
{

    string str;
    cout << "May i know your name? ";
    getline(cin, str);
    cout << "Hello " << str;
    return 0;
}