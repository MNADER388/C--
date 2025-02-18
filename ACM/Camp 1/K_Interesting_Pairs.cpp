#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    //3 4 7
    //1 2 5
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        ll low = l - a[i];
        ll high = r - a[i];

        auto left = lower_bound(a.begin() + i + 1, a.end(), low);
        auto right = upper_bound(a.begin() + i + 1, a.end(), high);

        count += right - left;
    }
    cout << count ;
}

int main()
{
                                           SMTYON
    ll T = 1;
    cin >> T;
    while (T--)
    {
        Mahmoud_Nader();
        cout << "\n";
    }

    return 0;
}
