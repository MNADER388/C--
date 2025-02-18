#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N;
    cin >> N;
    vector <ll> pre(N);
    vector <pair <ll,ll>> place(N);
    for(int i =0 ; i< N ;i++)
    {
        cin >> pre[i];
        place[i] = {pre[i] , i+1};
    }
    sort(all(place));
    for(int i =1 ; i< N ;i++) pre[i] += pre[i-1];
    ll cnt =0;
    for(int i = 0 ; i< N ; i++)
    {
        ll Sum = pre[i];
        if(Sum & 1)continue;
        ll Num = Sum/2;
        auto P = lower_bound(all(place) , make_pair(Num , 0LL));
        if(P != place.end())
        {
            if(P->first == Num && P->second <= i+1)
                cnt++;
        }
    }
    cout << cnt;
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
