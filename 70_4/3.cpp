#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
    int n,x; cin>>n>>x;
      vector<int> A(n),B(n);
      f(i,0,n) cin>>A[i];
      f(i,0,n) cin>>B[i];
      int sum=0;
      f(i,0,n){
        if(x<=A[i]) sum+= B[i];
      }      
      cout<<sum<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}