#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n;cin>>n;
        string s;cin>>s;
        int o=0; f(i,0,n) if(s[i]=='1') o++;
        int z =0; f(i,0,n) if(s[i]=='0') z++;
        if(z>o){
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                cout<<s[i];
            }
        }
        else{
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                cout<<s[i];
            }
        }
        cout<<endl;
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