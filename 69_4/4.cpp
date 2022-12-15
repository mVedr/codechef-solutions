#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; i < e; i++)
#define fi(k, s, e) for (int k = s; i <= e; i++)
using namespace std;
bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second < b.second;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> vp;
        vector<int> ai, bi;
        f(i, 0, n)
        {
            int a;
            cin >> a;
            ai.push_back(a);
        }
        f(i, 0, n)
        {
            int a;
            cin >> a;
            bi.push_back(a);
        }
        f(i, 0, n)
        {
            vp.push_back({ai[i], bi[i]});
        }
        sort(vp.begin(), vp.end(), cmp);
        // for (auto it : vp)
        //     cout << it.first << "  " << it.second << endl;

        set<int> cat;
        int t = 0;
        f(i, 0, n)
        {
            if (k > 0)
            {
                if (cat.find(vp[i].first) != cat.end())
                {
                    continue;
                }
                cat.insert(vp[i].first);
                t += vp[i].second;
                k--;
            }
        }
        if(k==0) cout<<t<<endl;
        else cout<<-1<<endl;
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