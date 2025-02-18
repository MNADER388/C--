#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    ll X;
    cin >> X;
    ll A = X , B = 0;
    for(int i = 32 ; i>= 0 ;i--)
    {
        if(!(A & (1LL << i)))
        {
            ll eq =(2*X) - (A+B);
            ll cur = ((1ll<<i)*2ll);
            if(eq >= cur)
            {
                A |= (1ll<<i);
                B |= (1ll<<i);
            }
        }
    }
    if((A+B) == 2*X)
    cout << A << " " << B;
    else
    cout << -1;
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
