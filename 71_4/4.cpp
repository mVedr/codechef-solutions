#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n; cin>>n;
  map<int,int> mp;
  f(i,0,n){
    int x; cin>>x;
    mp[x]++;
  }
  int k = 1 ;
  for(auto it : mp){
    if(it.second%2==1) {
        k=0;
        break;
    }
  }
  if(k==1) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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