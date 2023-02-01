#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;
void solve()
{
     int n;
        cin>>n; 
        vector<int> vec; 
        int count=0;
        for(int i=0;i<n;i++)
        { 
            int temp;
            cin>>temp;
            int val=abs(temp);
            vec.push_back(val);
            if(temp==0)
                count++;
        }  
        sort(vec.begin(),vec.end()); 
        if(count)
            cout<<-1; 
        else 
            cout<<vec[0]-1; 
        cout<<endl;
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