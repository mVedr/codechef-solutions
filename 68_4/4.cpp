#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t ; cin>>t;
    while(t--){
        int N,X,C; cin>>N>>X>>C;
        int sum = 0 ;
        for(int i = 0;i<N;i++){
            int k; cin>>k;
            if(X-k>=C) sum+= X-C;
            else sum+= k;
        }
        cout<<sum<<endl;
    }
}
int main(){
    solve();
    return 0;
}