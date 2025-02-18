#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    ll N;
    cin >> N;
    string s;
    cin >> s;
    ll ans = 1e10;
    for (int c = 0; c < 26; ++c) 
    {
        ll l = 0, r = N - 1, cnt = 0;
        while (l <= r) 
        {
            if (s[l] == s[r]) l++, r--;
            else if (s[l] == char('a' + c)) cnt++, l++;
            else if (s[r] == char('a' + c)) cnt++, r--;
            else 
            {
                cnt = 1e10;
                break;
            }
        }
        ans = min(ans, cnt);
    }
    if (ans == 1e10) ans = -1;
    cout << ans;
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
