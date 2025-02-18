#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int n , a ,b;
    cin >> n >> a >> b;
    ll ANS = 0;
    if(b < 2*a)
    {
        ANS += (n/2)*b;
        ANS += (n%2)*a;
    }
    else
    {
        ANS += n*a;
    }
    cout << ANS;
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
