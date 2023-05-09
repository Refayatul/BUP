/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/


#include <iostream>
using namespace std;
 
int main() {
  int A, B;
  cin >> A >> B;
  if(A <= B && B <= 6 * A) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
