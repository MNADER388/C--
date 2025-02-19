#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N;cin >> N;
    map <ll , ll> mp;
    ll cntk = 0, cntp = 0;
    for(int i =0 ; i < N ; i++)
    {
        ll X;cin >> X;
        mp[X]++;
        if(mp[X]%3 == 1)  cntk ++;
        else cntp ++;
    }
    if(cntp > cntk)
    cout << "YES";
    else
    cout << "NO";
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
