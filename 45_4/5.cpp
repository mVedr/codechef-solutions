#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> B(N);
        int sumb=0,suma;
        for (int i = 0; i < N; i++)
        {   
            cin >>B[i]; 
            sumb += B[i];
        }
        suma = (sumb / (N + 1));
            for (int i = 0; i < N; i++)
            {
               cout<<(B[i]-suma)<<" ";
            }cout<<endl;
    }
}

signed main()
{
    solve();
    return 0;
}