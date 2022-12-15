#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
      int n; cin>>n; int k =0;
      map<int,int> mp;
      f(i,0,2*n){
        int x; cin>>x;
        mp[x]++;
      }
      for(auto it :mp){
        if(it.second>2) {cout<<"No"<<endl ,  k =1; break ;}
      }
      if(!k) cout<<"Yes"<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}