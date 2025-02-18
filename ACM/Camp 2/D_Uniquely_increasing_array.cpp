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
    vector <ll> V(N);
    for(int i =0 ; i < N ; i++) cin >> V[i];
    ll prev = LLONG_MAX;
    ll Ans =0;
    for(int i = N-1 ; i >= 0; i--)
    {
        ll cnt =0;
        while(V[i] >= prev)
        {
            cnt++;
            V[i] /= 2;
        }
        Ans += cnt;
        prev = V[i];
        if(prev == 0)
            prev = 1;
    }
    for(int i =1 ; i < N ; i++)
    {
        if(V[i] <= V[i-1])
        {
            cout << -1;
            return;
        }
    }
    cout << Ans;
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
