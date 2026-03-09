#include <iostream>
using namespace std;
int main()
{
    // length

    /* char s[20];
     cout << "Eneter your name ";
     cin.getline(s, 20);
     cout << "Length " << strlen(s) << endl;
     return 0;
 */
    // concatenation

    /*  char s1[20] = "Good";
      char s2[20] = "Morning";
      // strcat(s1, s2);
      strncat(s1, s2, 5);
      cout << s1 << endl;
      return 0;
      */

    char s1[20] = "Akash";
    char s2[20] = "";
    strcpy(s2, s1);
    cout << s2 << endl;
}
