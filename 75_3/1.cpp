#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
         int A, B, C, D;
        cin >> A >> B >> C >> D;
        int r1 = B - A + 1;
        int r2 = D - C + 1;
        int k=min(B, D) - max(A, C) + 1;
        int result = r1 + r2 - k;
        if(k>0) result = r1 + r2 - k;
        else result = r1 + r2;
        cout << result << endl;

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
   int t = 1;
   cin>>t;
  while(t--){
      solve();
  }
    
    return 0;
}