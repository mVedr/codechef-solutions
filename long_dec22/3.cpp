#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
      string a,b; cin>>a>>b;
      int ao=0 , a1 =0, bo=0 , b1=0;
      for(char it : a){
        if(it=='0') ao++;
        else a1++;
      }
      for(char it : b){
        if(it=='0') bo++;
        else b1++;
      }
      int ans1 = min(a1,bo) + min(ao,b1);
      string ans ="";
      int k = a.length()-ans1;
     // cout<<"k : "<<k<<"  ans1 : "<<ans1;
      for(int i=0;i<ans1;i++){
        ans+="1";
      }
      for(int i =0;i<k;i++){
        ans+="0";
      }
      cout<<ans<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}