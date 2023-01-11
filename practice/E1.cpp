#include <bits/stdc++.h>

#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;

int find_mp(int i, int j, vector<vector<char>> &arr, vector<vector<int>> &cache, int n){
    if((i >= n || i < 0) || (j >= n)) return 0;
    if(cache[i][j] != -1) return cache[i][j];
    int max_path = 0;
    if(arr[i][j] == 'P') max_path = 1;
    int left_max = max(find_mp(i-2,j+1,arr,cache,n),find_mp(i+2,j+1,arr,cache,n));
    int right_max = max(find_mp(i-1,j+2,arr,cache,n),find_mp(i+1,j+2,arr,cache,n));
    max_path = max_path + max(left_max,right_max);
    cache[i][j] = max_path;
    return max_path;
}
int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int n, ki, kj;
        cin>>n;
        vector<vector<char>> arr;
        vector<vector<int>> cache(n, vector<int>(n, -1));
        for(int i=0; i<n; i++){
            vector<char> temp(n, '.');
            for(int j=0; j<n; j++){
                cin>>temp[j];
                if(temp[j] == 'K'){
                    ki = i;
                    kj = j;
                }
            }
            arr.push_back(temp);
        }
        int max_pawn = 0;
        max_pawn = find_mp(ki,kj,arr, cache, n);
        cout<<max_pawn<<"\n";
    }
    return 0;
}