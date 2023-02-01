#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];
    // subtask 1 :
    //   int ans = -1;
    //   f(i,0,n){
    //     int sum=0;
    //     f(j,0,n){
    //        if(a[j]>=a[i]) sum+=a[i];
    //     }
    //     ans = max(ans,sum);
    //   }
    //   cout<<ans;

    // subtask 2 :
    int ans = -1;
    sort(a.begin(), a.end());
    f(i,0,n){
        ans = max(ans,a[i]*(n-i));
    }
    cout<<ans;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //  cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}