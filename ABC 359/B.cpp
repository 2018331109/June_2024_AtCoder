#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

vector<int>primes;
vector<int>pre_sum;

void solve()
{
    int n;
    cin>>n;
    n*=2;
    int cnt=0;
    unordered_map<int, int>mp;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(mp[x] and (i-mp[x]==2)){
            cnt++;
        }
        mp[x]=i;
    }
    cout<<cnt<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

