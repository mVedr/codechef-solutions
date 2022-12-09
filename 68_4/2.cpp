//Make AP
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;cin>>t;
    while(t--){
        int a , c ;
        cin>>a>>c;
        if(a>c || (c-a) % 2 ==1 ) cout<<-1<<endl;
        else{
            cout<<(c+a)/2<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}