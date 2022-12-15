#include <bits/stdc++.h>
#define int long long
using namespace std;
int solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> ans;
    for (int i = 0; i < n / 2; i++)
    {
        ans.push_back(v[n - i - 1] - v[i]);
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]<ans[i+1])
        return -1;
    }
    return ans[0];
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}