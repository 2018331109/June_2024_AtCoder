#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;
const int INF=1e18;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int>a(m, 0), b(m, 0);
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int x;
            cin>>x;
            b[j]+=x;
        }
    }
    for(int i=0; i<m; i++)
    {
        if(a[i]>b[i])
        {
            no;
            return;
        }
    }
    yes;
    return;
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

