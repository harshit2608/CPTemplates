#include <bits/stdc++.h>

#define mod int(1e9 + 7)
#define ll long long
#define ld long double
#define ull unsigned long long
#define vci vector<int>
#define vcl vector<ll>
#define umi unordered_map<int, int>
#define uml unordered_map<ll, ll>
#define F first
#define S second
#define PB push_back
#define DB pop_back
#define MP make_pair
#define tc           \
    int t;           \
    scanf("%d", &t); \
    while (t--)

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(int a[], int n)
{
    int ans = 0;
    printf("%d\n", ans);
}
int main()
{
    fastIO();
    tc
    {
        int ans = 0, n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        solve(a, n);
    }
    return 0;
}
