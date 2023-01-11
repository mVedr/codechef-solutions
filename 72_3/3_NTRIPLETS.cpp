#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;

void p(vector<int> &ans, int n)
{
    for(int i = 2; i<sqrt(n); i++)
	{
	    if(n%i == 0){
	        cout<<i<<" "<<n/i<<" "<<1<<endl;
	        return;}
	}
	cout<<-1<<endl;
}
void solve()
{
    int n;
    cin >> n;
    // printPFs(n);
    vector<int> ans;
    p(ans, n);
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
