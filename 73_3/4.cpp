#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n; cin>>n;
  vector<int> a(n);
  f(i,0,n) cin>>a[i];
  f(i,1,n){
    a[i]=a[i-1]^a[i];
    a[i-1]=0;
  }
  int c = n;
  f(i,0,n){
    if(a[i]!=0) c--;
  }
  if(c==n){
    cout<<"YES"<<endl;
    return;
  }
  else {
    if(c%2==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return;
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