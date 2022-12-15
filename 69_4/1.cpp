#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
      int x; cin>>x;
      if(x<3) cout<<"LIGHT"<<endl;
      else if(x>=3 && x<7) cout<<"MODERATE"<<endl;
      else cout<<"HEAVY"<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}