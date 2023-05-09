/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/

#include <iostream>
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    if (b - a <= 0) {
        cout << "delicious" << endl;
    }
    else if (b - a > x) {
        cout << "dangerous" << endl;
    }
    else {
        cout << "safe" << endl;
    }

    return 0;
}
