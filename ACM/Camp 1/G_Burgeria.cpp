#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N;cin >> N;
    int cust = 1;
    multimap<ll , ll> money;
    map<ll , ll> fir;
    while(N--)
    {
        int ty;cin >> ty;
        if(ty == 1)
        {
            ll m;cin >> m;
            money.insert(make_pair(m, cust));
            fir[cust] = m;
            cust++;
        }
        else if(ty == 2)
        {
            ll fr = (fir.begin())->first , mon = (fir.begin())->second;
            cout << fr << " ";
            fir.erase(fir.begin());
            auto it = money.lower_bound(mon);
            money.erase(it);
        }
        else
        {
            ll mon = (prev(money.end()))->first , fr = (prev(money.end()))->second;
            auto it = money.lower_bound(mon);
            mon = it->first , fr = it->second;
            cout << fr << " ";
            fir.erase(fr);
            money.erase(it);
        }
    }
}

int main()
{
                                           SMTYON
    int T = 1;
    //cin >> T;
    while (T--)
    {
        Mahmoud_Nader();
        //cout << "\n";
    }

    return 0;
}
