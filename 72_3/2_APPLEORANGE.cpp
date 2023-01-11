#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define ll long long
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
using namespace std;
void solve(){
   int a,b; cin>>a>>b;
   cout<<gcd(a,b)<<endl;
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