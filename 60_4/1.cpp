#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int t ; cin>>t;
  while(t--){
    int X; cin>>X;
    if(X>100) cout<<X-10<<endl;
    else cout<<X<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}