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
    vector<int> b(n);
    
    int z = 0, o = 0;
    f(i, 0, n)
    {
        cin>>b[i];
        if (b[i] == 0)
            z++;
        else
            o++;
    }
   if(z%2==0) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}