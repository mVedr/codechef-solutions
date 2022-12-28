#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n; cin>>n;
   vector<int> a(n),b(n);
   f(i,0,n) cin>>a[i]; 
    f(i,0,n) cin>>b[i];
   int sum = 0 ;
  // for(auto it : a) cout<<it<<" "; cout<<endl;
  // for(auto it : b) cout<<it<<" "; cout<<endl;
   priority_queue<int> pq;
   f(i,0,n){
    if(a[i]==0 || b[i]==0){
        pq.push(sum);
        // cout<<sum<<endl;
        sum=0;
    }
    else{
        sum++;
       // cout<<sum<<endl;
    }
   }
   pq.push(sum);
   cout<<pq.top()<<endl;
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