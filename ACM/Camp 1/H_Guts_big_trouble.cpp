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
    vector<ll>vrx(N);
    map <ll,ll> mp;
    vector <ll> m;
    for(int i =0 ;i <  N ;i++) 
    {
        cin >> vrx[i];
        mp[vrx[i]]++;
        if(mp[vrx[i]]>1)
        m.push_back(vrx[i]);
    }
    sort(all(vrx));
    ll X = vrx[N-1];
    vector<ll>vry;
    for(int i =0 ;i <  N ;i++)
    {
        if(X%vrx[i] != 0)
        {
            vry.push_back(vrx[i]);
        }
    }
    for(int i =0 ;i < m.size();i++)
    {
        vry.push_back(m[i]);
    }
    sort(all(vry));
    ll Y = vry.back();
    cout << X << " " << Y;
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
