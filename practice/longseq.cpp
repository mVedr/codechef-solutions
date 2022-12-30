#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;

void solve(){
   string b; cin>>b;
   map<char,int> mp;
   f(i,0,b.length()){
    mp[b[i]]++;
   }
   if(mp['1']==b.length()-1 || mp['0']==b.length()-1) cout<<"Yes"<<endl;
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