#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
const ll two = 1073741830;
vector <ll> XOR(two);

void Mahmoud_Nader()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    for(ll i = 1 ; i < two;i++)
    {
        ll x= i;
        ll score = 0;
        ll pos = n - 1;

        while (pos >= 0 && x >= arr[pos]) 
        {
            x ^= arr[pos];
            score++;
            pos--;
        }

        XOR[i] = score;
    }
    while (q--) 
    {
        ll x;
        cin >> x;
        cout << XOR[x] << " ";
    }
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
