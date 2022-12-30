#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
     string A, B; cin >> A >> B; int count = 0;
    if(A.length() < B.length()) swap(A, B);
    for(int i = 0 ; i < A.length() && count < B.length() ; i++)
        if(A[i] == B[count]) count++;
    if(count == B.size()) cout << "YES\n"; else cout << "NO\n";
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