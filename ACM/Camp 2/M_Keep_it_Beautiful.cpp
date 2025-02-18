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
    vector <ll> Ans;
    string S;
    ll X;cin >> X;
    Ans.push_back(X);
    S.push_back('1');
    ll cnt = 0;
    for(int i = 1 ; i< N ;i++)
    {
        cin >> X;
        if(cnt == 0)
        {
            if(X >= Ans.back()) 
            {
                Ans.push_back(X);
                S.push_back('1');
            }
            else if(X <= Ans.front())
            {
                Ans.push_back(X);
                cnt =1;
                S.push_back('1');
            }
            else
            {
                S.push_back('0');
            }
        }
        else
        {
            if(X >= Ans.back() && X <= Ans.front())
            {
                Ans.push_back(X);
                S.push_back('1');
            }
            else
            {
                S.push_back('0');
            }
        }
    }
    cout << S;
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
