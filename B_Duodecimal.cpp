#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    // W = b^(K-1)
    // b = W^(1/(K-1))
    ll W;
    ll K;
    cin >> W >> K;

    bool ch = false;

    if (K == 1 && W == 1) ch = true;
    else 
    {
        ll b = round(pow(W , 1.0 / ((double)K - 1)));

        ll weight = 1;
        for (int i = 1; i < K; ++i) 
        {
            weight *= b;
        }

        if (weight == W && b >= 2) {
            ch = true;
        }
    }

    if (ch) cout << "YES" << endl;
    else cout << "NO" << endl;

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
