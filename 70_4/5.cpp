#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n ;
   string S ; cin>>S;
     int mini  = 100000000;
     vector<int> I;
    f(i,0,n){
        if(S[i]=='1' ){
           I.push_back(i);
        }
    }
    //for(auto it : I) cout<<it;cout<<endl;
    f(i,0,I.size()){
       // f(j,0,I.size()){
            if(I[0]!=I[i]){
              if(abs(I[0]-I[i])%2==1) {
                int k = 1 ;
                 mini = min(mini,k);
              }else{
                int k = 2 ;
                mini = min(mini,k);
              }
            }
      //  }
    }
    cout<<mini<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}