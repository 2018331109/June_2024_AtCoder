#include <bits/stdc++.h>
using namespace std;

#define int long long
#define INF 1e18

void solve()
{
    int N, M;
    cin >> N >> M;
    vector<string> stands(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> stands[i];
    }

    int allFlavors = (1 << M) - 1;  // All flavors represented as bitmask 111...111 of length M
    vector<int> dp(1 << M, INF);  // dp[mask] will store the minimum number of stands to achieve 'mask' flavors
    dp[0] = 0;  // No stands needed to get 0 flavors

    for (int i = 0; i < N; ++i)
    {
        int standMask = 0;
        for (int j = 0; j < M; ++j)
        {
            if (stands[i][j] == 'o')
            {
                standMask |= (1 << j);
            }
        }

        for (int mask = allFlavors; mask >= 0; --mask)
        {
            dp[mask | standMask] = min(dp[mask | standMask], dp[mask] + 1);
        }
    }

    cout << dp[allFlavors] << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    // cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

