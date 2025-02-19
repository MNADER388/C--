#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    ll n;
    cin >> n;
    vector<ll> x(n);
    for (int i = 0; i < n; ++i) cin >> x[i];
    if(n < 4)
    {
        cout <<"0\n";
        for(int i = 0 ; i < n ; i++)
        {
            cout << fixed << setprecision(6) << (long double)x[i] << " ";
        }
        for(int i = 3-n ; i > 0 ; i--)
        {
            cout << fixed << setprecision(6) << (long double)x[n-1] << " ";
        }
        return;
    }
    sort(x.begin(), x.end());
    long double l = 0 , r=2e10 , Ans , FSTA[3]{};
    for(int i =0 ; i < 100 ; i++)
    {
        long double m = l + (r-l)/2 , cursta[3] , cover = -1;
        ll cnt = 0;

        for(int i = 0 ; i < n ;i++)
        {
            if(x[i] > cover)
            {
                cover = x[i] + (2*m);
                cursta[cnt] = x[i]+m;
                cnt++;
                if(cnt > 3)
                    break;
            }
        }
        if(cnt > 3) l = m;
        else
        {
            r=m;
            Ans = m;
            for(int i =0 ; i < 3 ; i++) FSTA[i] = cursta[i];
        }

    }
    cout << fixed << setprecision(7) << Ans << '\n';

    for (int i = 0; i < 3; i++) cout << fixed << setprecision(7) << FSTA[i] << ' ';

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
