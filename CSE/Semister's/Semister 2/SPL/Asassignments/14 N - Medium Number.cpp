/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int arr[3]={0};
        for(int i = 0;i<3;i++)arr[i]=0;
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        cout<<arr[1]<<endl;
    }
}
