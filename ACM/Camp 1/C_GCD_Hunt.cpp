#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int A , B;
    cin >> A >> B;
    ll MIN = min(A,B) , MAX = max(A,B);
    map<ll,ll> div;
    div[1]++;
    if(MAX%MIN == 0)
    div[MIN]++;
    for(ll i = 2 ; i*i <= MIN ; i++)
    {
        if(MIN%i == 0)
        {
            if(MAX%i==0)
            {
                div[i]++;
            }
            if(MAX%(MIN/i) == 0)
            {
                div[MIN/i]++;
            }
        }
    }
    int N;
    cin >> N;
    while(N--)
    {
        ll L , R;
        cin >> L >> R;
        ll ANS = -1;
        for(auto D:div)
        {
            if(D.first >= L && D.first <= R)
            {
                ANS = D.first;
            }
        }
        cout << ANS << "\n";
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
