#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, i;
        int mx = 0;
        cin >> a;
        string s;
        cin >> s;
        map<pair<char, int>, int> k;
        char l = s[0];
        int n = 1;
        k[{l, n}]++;
        for (i = 1; i < a; i++)
        {
            if (l != s[i])
            {
                n = 1;
                l = s[i];
            }
            else
            {
                n++;
            }
            k[{l, n}]++;
        }
        for (auto i : k)
        {
            if (i.second == 1)
            {
                mx = max(mx, i.first.second - 1);
                continue;
            }
            mx = max(mx, i.first.second);
        }
        cout<<mx<<endl;
    }
}
int main()
{
    solve();
    return 0;
}