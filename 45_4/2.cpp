#include<bits/stdc++.h>
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c||b==d) {
        cout<<2<<endl;
    }else cout<<1<<endl;
  }
}
int main(){
    solve();
    return 0;
}