#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n; cin>>n;
  string s; cin>>s;
  int c0=0,c1=0;
  f(i,0,n){
    if(s[i]=='0') c0++;
    else c1++;
  }
  if(c1==0){
    cout<<0<<endl;
    return;
  }
  if(c0==0){
    cout<<1<<endl;
    return;
  }
  if(c0>=c1) cout<<c1<<endl;
  else cout<<c0+1<<endl;
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