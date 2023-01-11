#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 998244353
using namespace std;
int h(string s,int n){
   if(n<0) return 1;
   if(n==0) return 1;
   int op1  = h(s,n-1);
   int op2 = h(s,n-2);
   if((s[n-1]=='b' && s[n]=='a')||(s[n]=='b' && s[n-1]=='a')){
       return op1 + op2;
   }
   else return op1;
}
int dph(string s,int n){
    s= '#'+s;
    vector<int> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]  = dp[i-1]%MOD;
         if(((s[i]=='a' && s[i-1]=='b')||(s[i]=='b' && s[i-1]=='a'))&&i>1){
             dp[i]+= dp[i-2]%MOD;
         }
    }
    return dp[n]%MOD;
}
void solve(){
  string s; cin>>s;
  cout<<dph(s,s.length())<<endl;
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