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
    int N, K, Q; cin >> N >> K >> Q;
    VI pts (N, K - Q);
    while (Q--)
    {
        int a; cin >> a;
        ++pts[a - 1];
    }
    for (int i: pts)
    {
        if (i > 0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
