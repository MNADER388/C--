#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
vector<int> pa[1001];

void Mahmoud_Nader()
{
    ll n; cin >> n;
    vector<ll> X[1001];
    for(int i = 1; i <= n; i++) {
        ll x; cin >> x;
        X[x].push_back(i);
    }
    ll ans = -1;
    for(int i = 1; i <= 1000; i++) 
    {
        for(int j: pa[i]) 
        {
            if(!X[i].empty() && !X[j].empty()) 
            {
                ans = max(ans, X[i].back() + X[j].back());
            }
        }
    }
    cout << ans; 
}

int main()
{
                                           SMTYON
    for(int i = 1; i <= 1000; i++) 
    {
        for(int j = 1; j <= 1000; j++) 
        {
            if(__gcd(i, j) == 1) 
            {
                pa[i].push_back(j);
            }
        }
    }
    
    ll T = 1;
    cin >> T;
    while (T--)
    {
        Mahmoud_Nader();
        cout << "\n";
    }

    return 0;
}
