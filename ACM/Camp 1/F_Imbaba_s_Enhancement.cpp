#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
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
    long double min_d = 1e18;
    long double l = 0 , r=2e9;
    for(int i = 0 ; i<50 ; i++)
    {
        long double m = l+(r-l)/2.0;
        if(good(x ,m))
        {
            r = m;
            min_d = min(min_d , m);
        }
        else
        l=m;
    }
    vector<double> stations(3);
    int pos = 0;
    for (int s = 0; s < 3; ++s) {
        if(pos < n)
        {
            stations[s] = x[pos] + min_d;
            while (pos < n && x[pos] <= stations[s] + min_d) {
                pos++;
            }
        }
        else
        {
            stations[s] = x[n-1];
        }
    }
    cout << fixed << setprecision(6) << min_d << endl;
    cout << fixed << setprecision(6) << stations[0] << " " << stations[1] << " " << stations[2] << endl;

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
