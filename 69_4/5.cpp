#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
void solve(){
  int t; cin>>t;
  
  while(t--){
    int n; cin>>n;
    string bin; cin>>bin;
    int o=0,z=0; string f="",s="";
    f(i,0,2*n){
        if(bin[i]=='1') o++;
        else z++;
        if(i<n){
          f += bin[i];
        }
        else {
            s+=bin[i];
        }
    }
    //cout<<" o : "<<o<<" z : "<<z<<endl;
    if(o==0|| z==0){
        cout<<-1<<endl; continue;
    }
    if(f!=s){
       f(i,1,n+1){
        cout<<i<<" ";
       }cout<<endl;
    }
    else{
        cout<<1<<" ";
        f(i,n+2,2*n+1){
          cout<<i<<" ";
        }cout<<endl;
    }
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}