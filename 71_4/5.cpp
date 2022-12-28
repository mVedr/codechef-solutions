#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
int lcs(string pattern_1, string pattern_2) {
  int m = pattern_1.size();
  int n = pattern_2.size();
  int dp[n + 1][m + 1];
  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < m + 1; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
      } else if (pattern_2[i - 1] == pattern_1[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  return dp[n][m];
}
void solve(){
  int n;cin>>n;
  string str ; cin>>str;
  string str2 = str;
  reverse(str.begin(),str.end());
//   f(i,0,n/2){
//     str1 += str[i];
//   }f(i,n/2,n){
//     str2+=str[i];
//   }
//   reverse(str2.begin(),str2.end());
//   //cout<<str1<<"  "<<str2<<endl;
//   int opt1 = lcs(str1,str2);
//  // cout<<opt1<<endl;
//   str1="",str2="";
//   fi(i,0,n/2){
//     str1 += str[i];
//   }f(i,(n/2)+1,n){
//     str2+=str[i];
//   }reverse(str2.begin(),str2.end());
//   int opt2 = lcs(str1,str2);
//   cout<<max(opt1,opt2)<<endl;
 // int mx = -1;
  cout<<lcs(str,str2)/2<<endl;
  
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