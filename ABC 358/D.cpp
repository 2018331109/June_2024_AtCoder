#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int mod=1e9+7;
const int N = 2e5+5;
const int INF=1e18;
int md=998244353;

void solve()
{
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    sort(a, a+n);
    sort(b, b+m);

    int ans=0;
    int i=0, j=0;
    while(i<n and j<m)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else
        {
            ans+=a[i];
            i++, j++;
        }
    }
    if(j==m)
    {
        cout<<ans<<endl;
        return;
    }
    neg;

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

