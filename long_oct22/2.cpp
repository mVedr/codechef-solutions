#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }return dec;
}
void solve(){
  int n; cin>>n;
  int b; cin>>b;
  int k = convert(b);
  int mx = -1 ;
   priority_queue<pair<int,int>> pq;
  f(i,1,n+1){
   // cout<<(k^(k>>i))<<"  ";
    pq.push({k^(k>>i),i});
  }
  auto it = pq.top();
  cout<<it.second<<endl;
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