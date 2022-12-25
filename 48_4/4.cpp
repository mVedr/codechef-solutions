#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n , m ; cin>>n>>m;
  if(n%2==0&&m%2==0)cout<<0<<endl;
	   else if(n%2==1&&m%2==1)cout<<n+m-1<<endl;
	   else if(n%2==0)cout<<n<<endl;
	   else cout<<m<<endl;
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