#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
    int X,Y; cin>>X>>Y;
    double p = (float)Y/X;
    if(p<0.5) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}