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
    string s; cin >> s;
    VI lexi (26);
    for(char c : s)
    {
        ++lexi[c - 'a'];
        if (lexi[c - 'a'] > 1)
        {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";
    return 0;
}
