/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  if (N <= 125) {
    cout << 4 << '\n';
  } else if (N <= 211) {
    cout << 6 << '\n';
  } else {
    cout << 8 << '\n';
  }
  return 0;
}
