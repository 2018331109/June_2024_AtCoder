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

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int>a(n, 0);
    int total=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
    }
    sort(a.begin(), a.end());
    if(k>0)
    {
        yes;
        for(auto it:a)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    if(total<k)
    {
        no;
        return;
    }
    reverse(a.begin(), a.end());
    yes;
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
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

