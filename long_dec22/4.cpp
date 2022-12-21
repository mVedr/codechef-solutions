#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
      int n,k; cin>>n>>k;
      vector<int> A(n);

      int p=1;
      f(i,0,n){
        cin>>A[i];
        p=(p*A[i])%k;
      }
      //cout<<p<<endl;
      if(p==0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}