#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    queue<int> q1,q2;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n/2;i++){
        q1.push(arr[i]);
    }
    for(int i=n/2;i<n;i++){
        q2.push(arr[i]);
    }
    vector<int> ans;
    while(!q1.empty() && !q2.empty()){
        ans.push_back(q2.front());
        q2.pop();
        ans.push_back(q1.front());
        q1.pop();
    }
    if(!q2.empty()){
        ans.push_back(q2.front());
    }
    for(int i=0;i<n-1;i++){
        if(ans[i]==ans[i+1]){
            cout<<-1<<endl;
            return;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

