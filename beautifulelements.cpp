#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

#define UNSYNC ios::sync_with_stdio(false); cin.tie(nullptr);
#define sci(x) static_cast<int>(x)
#define all(x) x.begin(), x.end()
#define rep(ini, x) for (int i {ini}; i < x; ++i)
#define VI vector<int>
#define VVI vector<vector<int>>

int main()
{
    UNSYNC
    string w; cin >> w;
    VI lexi (26);
    for(char c: w)
    {
        ++lexi[c - 'a'];
    }
    for (int i : lexi) 
    {
        if (i % 2)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
