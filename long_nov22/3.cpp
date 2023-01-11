#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
using namespace std;
const int N = 1e6+10;
const int M= 1000000007;
long long mod(long long x){
    return ((x%M + M)%M);
}
long long add(long long a , long long b){
    return mod(mod(a)+mod(b));
}
long long mul(long long a,long long b){
    return mod(mod(a)*mod(b));
}

 void solve(vector<int> &dp){
  int n; cin>>n;
  int sum = 0;
  int mx=-1;
  vector<int> a(n);
  f(i,0,n){
    cin>>a[i];
  }
  f(i,0,n){
    sum = add(sum,dp[a[i]]);
  }
  cout<<sum<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    vector<int> dp(N,0);
    dp[1] = 1 ;
    f(i,2,N+1) {
        dp[i] = mul(dp[i-1],i);
    }
   int t = 1;
   cin>>t;
  while(t--){
      solve(dp);
  }
    return 0;
}