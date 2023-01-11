#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int a,b,x,y; cin>>a>>b>>x>>y;
  double c = (float)a/x , d = (float)b/y;
  if(c==d) cout<<"Both"<<endl;
  else if(c<d) cout<<"Chef"<<endl;
  else cout<<"Chefina"<<endl;
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