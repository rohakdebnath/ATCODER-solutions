#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

#define UNSYNC ios::sync_with_stdio(false); cin.tie(nullptr);
#define sci(x) static_cast<int>(x)
#define all(x) x.begin(), x.end()
#define rep(i, ini, x) for (int i {ini}; i < x; ++i)
#define per(i, fin, x) for (int i {fin}; i >= x; --i)
#define VI vector<int>
#define VVI vector<vector<int>>

int main()
{
    UNSYNC
    int N; cin >> N;
    int x = (sqrt(8*N + 1) - 1)/2 + 1;
    int exceed = (x*(x + 1))/2 - N;

    rep(i, 1, x + 1)
    {
        if (i == exceed) continue;
        cout << i << '\n';
    }
    return 0;
}
