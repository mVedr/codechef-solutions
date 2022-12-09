#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    res = (res*res);
    if (b % 2)
        return (res * a);
    else
        return res;
}
void solve(){
    int t ; cin>>t;
    while(t--){
        int n,x ;
        cin>>n>>x;
        cout<<binpow(2,n-x)<<endl;
    }
}
int main(){
    solve();
    return 0;
}