#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N;cin >> N;
    string S;cin >> S;
    vector <ll> arr[28];
    for(int i =0 ; i < N ;i++) arr[S[i]-'a'].push_back(i);
    int Q;cin >> Q;
    while(Q--)
    {
        string S2;cin >> S2;
        ll Ans =0 ;
        vector <ll> N(28);
        for(int i =0 ; i < S2.size() ; i++)
        {
            ll cur = arr[S2[i]-'a'][N[S2[i]-'a']];
            Ans = max(Ans , cur);
            N[S2[i]-'a']++;
        }
        cout << Ans+1 << "\n";
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
