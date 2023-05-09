/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
