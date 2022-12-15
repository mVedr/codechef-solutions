#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
      int a,b,c; cin>>a>>b>>c;
      if(a!=b && b!=c && c!=a){
         if((a<b+c)&&(b<a+c)&&(c<a+b)){
            cout<<"YES"<<endl;
         } else cout<<"NO"<<endl;
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