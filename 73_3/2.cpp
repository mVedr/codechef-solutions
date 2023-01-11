#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define ll long long
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
using namespace std;
void solve(){
  int x,y; cin>>x>>y;
  if(x==y){
    cout<<x<<endl;return;
  }
  int a = lcm(x,y) - x - y;
   if(x%y==0) cout<<a+x<<endl;
   else if(y%x==0) cout<<a+y<<endl;
  else cout<<a<<endl;
  
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