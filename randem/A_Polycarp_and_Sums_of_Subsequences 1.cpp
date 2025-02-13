#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define SMTYON               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)

void solve()
{
    ull arr[8];
    ull a1 ,a2 , a3;
    for(int i =0 ; i < 7 ;i++) cin >> arr[i];
    a1 = arr[0];
    a2 = arr[1];
    a3 = arr[6] - (arr[0] + arr[1]);
    cout << a3 << " " << a2 << " " << a1 << "\n";
}

int main()
{
    SMTYON;
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
