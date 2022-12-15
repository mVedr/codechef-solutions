#include<bits/stdc++.h>
#define int long long
#define f(s,e) for(int i=s;i<e;i++)
#define fi(s,e) for(int i=s;i<=e;i++)
#define fm(e,s) for(int i=e;i>=s;i--)
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
      int n; cin>>n;
      string bin ; 
      cin>>bin;
      int o=0,z=0;
      f(0,bin.length()){
         if(bin[i]=='1') o++;
         else z++;
      }
      if(z%2==0 || o%2==0) {
        cout<<"YES"<<endl;
      }else cout<<"NO"<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}