#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N ;char C;string S;
    cin >> N >> C >> S;
    ll Ans = 0;
    set <ll> posg;
    set <ll> posy;
    set <ll> posr;
    for(int i =0 ; i < N ;i++)
    {
        if(S[i] == 'g')
            posg.insert(i);
        if(S[i] == 'y')
            posy.insert(i);
        if(S[i] == 'r')
            posr.insert(i);
    }
    if(posg.size() == 0)
    {
        cout << -1;
        return;
    }
    if(C == 'g')
    {
        cout << 0;
        return;
    }
    else if(C == 'r')
    {
        for(auto v : posr)
        {
            auto it = posg.lower_bound(v);
            if(it == posg.end())
            {
                ll p = (N-v) + (*(posg.begin()));
                Ans = max(Ans , p);
            }
            else
            {
                ll p = *it - v;
                Ans = max(Ans , p);
            }
        }
    }
    else
    {
        for(auto v : posy)
        {
            auto it = posg.lower_bound(v);
            if(it == posg.end())
            {
                ll p = (N-v) + (*(posg.begin()));
                Ans = max(Ans , p);
            }
            else
            {
                ll p = *it - v;
                Ans = max(Ans , p);
            }
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
