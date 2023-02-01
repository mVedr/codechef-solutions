#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n, k; cin>>n>>k;
  int e=0,o=0;
  f(i,0,n){
    int x; cin>>x;
    if(x%2) o++;
    else e++;
  }
  if(k%2){
    if(e%2) cout<<(e/2) + 1<<endl;
    else cout<<e/2<<endl;
  }
  else{
    if(e!=n){
        cout<<e<<endl;
    }else cout<<-1<<endl;
  }
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