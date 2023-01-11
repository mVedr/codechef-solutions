#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
const int M = 998244353;
long long mod(long long x){
    return ((x%M + M)%M);
}
long long add(long long a , long long b){
    return mod(mod(a)+mod(b));
}
long long mul(long long a,long long b){
    return mod(mod(a)*mod(b));
}
using namespace std;
void solve(){
  int n; cin>>n;
  int s = 0;
  f(i,0,n){
    int x; cin>>x;
    s = add(s,x);
  }
  cout<<mul(s,(s-1))<<endl;
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