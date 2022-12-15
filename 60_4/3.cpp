#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
    int N, K; cin>>N>>K;
    int s = N/K ;
    cout<<s*s<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}