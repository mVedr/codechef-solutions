#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; i < e; i++)
#define fi(k, s, e) for (int k = s; i <= e; i++)
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans=0;
        vector<int> v;
        f(i, 0, n)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        // for(auto it :v){
        //     cout<<it<<"  ";
        // }cout<<endl;
        int s = v.size();
        for (int i = 0; i < s; i++)
        {
            int k = i + 1 - v[i];
            if (k < 0)
            {
                ans = -1;
                 break;
            }
           ans+=k;
        }
        cout<<ans<<endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}