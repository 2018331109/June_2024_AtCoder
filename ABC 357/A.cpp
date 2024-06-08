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
    int sum=0;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(sum+a[i]>m) break;
        sum+=a[i], cnt++;
    }
    cout<<cnt<<endl;

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

