//Bull Or Bear
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int b,s;cin>>b>>s;
        if(b>s) cout<<"LOSS"<<endl;
        else if(b==s) cout<<"NEUTRAL"<<endl;
        else cout<<"PROFIT"<<endl;
    }
}
int main(){
    solve();
    return 0;
}