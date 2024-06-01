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
    vector<int>v(61, 0);
    int x=m, i=0;
    while(x>0)
    {
        if(x%2)
        {
            v[i]=1;
        }
        i++, x/=2ll;
    }
    int now=2ll, ans=0;
    for(int i=0; i<61; i++)
    {
        if(v[i]==1)
        {
            int cnt=(((n+1)/now)*(now/2ll));
            cnt+=max(0ll, ((n+1)%now)-(now/2ll));
            cnt%=md;
            ans+=cnt;
            ans%=md;
        }
        now*=2ll;
    }
    cout<<ans<<endl;
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

