#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n;
  cin>>n;
  string b;
  cin>>b;
  int z=0,o=0;
  f(i,0,n) {if(b[i]=='0') z++; else o++;}
  if(o==3) cout<<"YES"<<endl;
  else if(b=="1"||b=="10"){
    cout<<"NO"<<endl;
  }
  else if(o<3){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
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