#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define ull unsigned long long
#define ld long double
#define SMTYON               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
//..........................................F*CK...............................................................................................................
void solve()
{
    int N , A , B;
    cin >> N >> A >> B;
    ll Ans = abs(A - B);
    if(Ans % 2 == 0)
    cout << "YES" ;
    else
    cout << "NO";
}

int main()
{
    SMTYON;
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}
