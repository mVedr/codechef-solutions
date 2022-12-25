#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;

int solve(long n)
 {
    if(n>=12)
    return solve(n/2) + solve(n/3)+ solve( n/4);
    else
    return n;
    
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
     int n; 
     while(cin>>n)
     cout<<solve(n)<<endl;
    
    return 0;
}