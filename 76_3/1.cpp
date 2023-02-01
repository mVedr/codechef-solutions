#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int x,y,z;
  cin>>x>>y>>z;
  int tt  = min({x,y,z});
  if(x==tt) cout<<"ALICE"<<endl;
  else if(y==tt) cout<<"BOB"<<endl;
  else cout<<"CHARLIE"<<endl;
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