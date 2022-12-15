#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;cin>>N;
        vector<int> B(N + 1);
        map<int, bool> mp;
        int prev = 5;
        int i ;
        for (i = 1; i < N; i++)
        {
            cin >> B[i];
            if (B[i] == 1)
            {
                if (prev == 1)
                {
                    mp.insert({i + 1, 0});
                }
                else if (prev == 0)
                {
                    mp.insert({i + 1, 1});
                }
                else
                {
                    mp.insert({i, 0});
                    mp.insert({i + 1, 1});
                }
            }
            else
            {
                if (prev == 1)
                {
                    mp.insert({i + 1, 1});
                }
                else if (prev == 0)
                {
                    mp.insert({i + 1, 0});
                }
                else
                {
                    mp.insert({i, 1});
                    mp.insert({i + 1, 1});
                }
            }
            prev = mp[i + 1];
            //cout<<prev<<endl;
        }
        cin>>B[i];
        int a;
        if(B[i]==0){
            if(prev==1) a=1;
            else a = 0;
        }else{
            if(prev==1) a=0;
            else a = 1;
        }
        if(a==mp[1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main()
{
    solve();
    return 0;
}