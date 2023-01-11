#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n,y; cin>>n>>y;
  vector<int> a(n);
  cin>>a[0];
  int k= a[0];
  f(i,1,n){
    cin>>a[i];
    k=k|a[i];
  }
 // cout<<k<<endl;
 int p =(y-k)|k;
  if(p==y) cout<<y-k<<endl;
  else cout<<-1<<endl;
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