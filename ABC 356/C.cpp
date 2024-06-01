#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;
const int INF=1e18;
int n, m, k;
map<int, int>mp;
vector<vector<int>>c(101, vector<int>());
vector<char>ch(101, ' ');
int ans=0;

void call(int cur)
{
    if(cur == n + 1)
    {
        int f = 0;
        for(int i = 0; i < m; i++)
        {
            int cnt = 0;
            for(int j = 0; j < c[i].size(); j++)
            {
                if(mp[c[i][j]] == 1)
                {
                    cnt++;
                }
            }
            if((cnt >= k && ch[i] == 'x') || (cnt < k && ch[i] == 'o'))
            {
                f = 1;
                break;
            }
        }
        if(f == 0) ans++;
        return;
    }
    mp[cur] = 1;
    call(cur + 1);
    mp[cur] = 0;
    call(cur + 1);
}

void solve()
{
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        while(x--)
        {
            int y;
            cin >> y;
            c[i].pb(y);
        }
        cin >> ch[i];
    }
    call(1);
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

