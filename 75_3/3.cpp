#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
     int n; cin>>n;
     string b; cin>>b;
     vector<int> v;
     int ans=0;
     f(i,0,n){
        int j=i;
        int temp=0;
        while(j<n && b[j]=='1'){
            temp++;
            j++;
        }
        v.push_back(temp);
        ans=max(ans,temp);
        i=j;
     }
     ans=v[0];
     int mx=0;
     f(i,1,v.size()){
        mx=max(mx,v[i]);
     }
     cout<<ans+mx<<endl;
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