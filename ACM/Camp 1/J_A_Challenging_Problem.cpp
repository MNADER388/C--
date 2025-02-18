#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll min_sum = k * (k + 1) / 2;
    ll max_sum = k * (2 * n - k + 1) / 2;

    if (x >= min_sum && x <= max_sum) cout << "YES";
    else cout << "NO";
    
}

int main()
{
                                           SMTYON
    int T = 1;
    cin >> T;
    while (T--)
    {
        Mahmoud_Nader();
        cout << "\n";
    }

    return 0;
}
