/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  
    
    int n; cin>>n;
    if (n == 1) cout<<1;
    else if (n < 4) cout<<"NO SOLUTION";
    else {
        for (int i = 2; i <= n; i += 2)
            cout<<i<<' ';
        for (int i = 1; i <= n; i += 2)
            cout<<i<<' ';
    }
