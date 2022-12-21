#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
      string A,B ; cin>>A>>B;
     int o1=0,z1=0,o2=0,z2=0;
     f(i,0,n){
        if(A[i]=='0'){
            z1++;
        }else o1++;
        if(B[i]=='0') z2++;
        else o2++;
     }
     
     if(z1==z2 && o1==o2) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}