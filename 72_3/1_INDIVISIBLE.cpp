#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int a,b,c; cin>>a>>b>>c;
  if(a!=99 && b!=99 && c!=99){
    cout<<99<<endl;
    return;
  }else{
    if(a!=98 && b!=98 && c!=98){
        cout<<98<<endl;
        return;
    }
     if(a!=97 && b!=97 && c!=97){
       cout<<97<<endl;
       return;
    }
    cout<<96<<endl;
    return;
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

// for(int i = 1 ; i<100; i++)
// if(a%i!=0 && b%i!=0 && c%i!=0)
//  {cout<<i<<endl; break;}