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
    int A, B; cin >> A >> B;
    int extd = (B - 1)/(A - 1);
    if ((B - 1) % (A - 1) != 0) ++extd;
    cout << extd << '\n';
    return 0;
}
