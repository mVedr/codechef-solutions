#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
    int N ; cin>>N ;
    map<int,int> mp;
    for(int i=0;i<N;i++){
        int x ; cin>>x;
        mp[x]++;
    }
    vector<int> ans ;
    for(auto it : mp){
        ans.push_back(it.second);
    }
    sort(ans.begin(),ans.end());
    int sum =  accumulate(ans.begin(),ans.end(),0);
    int end = *(ans.end()-1);
    cout<<sum-end<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}