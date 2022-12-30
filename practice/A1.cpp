#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;

bool h(vector<int> a, int n,int s){
    if(s==0) return true;
    if(s<0 || n<1) return false;
    int opt1 = h(a,n-1,s-a[n-1]);
    int opt2 = h(a,n-1,s);
    return opt1||opt2;
}

void solve(){
  int n,m; cin>>n>>m;
  vector<int> a(n);
  f(i,0,n) cin>>a[i];
  if(h(a,n,m)) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
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