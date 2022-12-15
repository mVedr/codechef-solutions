#include<bits/stdc++.h>
using namespace std;
void solve(){
   int t ; cin>>t;
   while(t--){
    int S,X,Y,Z;
    cin>>S>>X>>Y>>Z;
    if(S-X-Y>=Z) cout<<0<<endl;
    else{
        int k  = max(X,Y);
        if(S-X-Y+k>=Z) cout<<1<<endl;
        else {
            cout<<2<<endl;
        }
    }
   }
}
int main(){
    solve();
    return 0;
}