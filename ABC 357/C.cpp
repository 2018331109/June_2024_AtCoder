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

void generateCarpet(vector<string>& carpet, int n, int x, int y, int size)
{
    if (n == 0)
    {
        carpet[x][y] = '#';
        return;
    }

    int newSize = size / 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
            {

                for (int a = x + newSize; a < x + 2 * newSize; a++)
                {
                    for (int b = y + newSize; b < y + 2 * newSize; b++)
                    {
                        carpet[a][b] = '.';
                    }
                }
            }
            else
            {

                generateCarpet(carpet, n - 1, x + i * newSize, y + j * newSize, newSize);
            }
        }
    }
}

void solve()
{
    int N;
    cin >> N;

    int size = pow(3, N);
    vector<string> carpet(size, string(size, '#'));

    generateCarpet(carpet, N, 0, 0, size);

    for (const auto& row : carpet)
    {
        cout << row << endl;
    }

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

