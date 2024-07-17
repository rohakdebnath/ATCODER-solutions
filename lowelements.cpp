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
    int N; cin >> N;
    VI P (N); rep(0, N) cin >> P[i];

    int newminimas = 0;
    int minval = INT32_MAX;
    rep(0, N)
    {
        if (P[i] < minval)
        {
            minval = P[i];
            ++newminimas;
        }
    }

    cout << newminimas << '\n';
    return 0;
}
