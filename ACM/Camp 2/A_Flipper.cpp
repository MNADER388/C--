#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    ll N; cin >> N;
    vector<ll> per(N);
    for (int i =0 ; i < N; i++) cin >> per[i];
    ll r = 0;
    for (ll i = 0; i < N; i++ ) 
    {
        ll x = min(N-1, r+1);
        ll y = min(N-1, i+1);
        if (per[x] <= per[y]) r = i;
    }
    vector<ll> Ans;
    for (int i = r + 1; i < N; i++)
    {
        Ans.push_back(per[i]);
    } 
    Ans.push_back(per[r]);
    for (int i = r-1; i >= 0; i--) 
    {
        if (per[i] > per[0]) 
        {
            Ans.push_back(per[i]);
        }
        else 
        {
            for (int j = 0; j <= i; j++) 
            {
                Ans.push_back(per[j]);
            }
            break;
        }
    }
    for (int i =0 ; i < Ans.size() ; i++) 
        cout << Ans[i] << " ";
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
