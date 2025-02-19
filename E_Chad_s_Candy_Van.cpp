#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
ll N, K;
vector<ll> a;
vector<ll> b;

void Mahmoud_Nader() 
{
    cin >> N >> K;
    a.resize(N);
    b.resize(N);
    ll mina = 1e15 , maxb= 0;
    for (int i = 0; i < N; i++) 
    {
        cin >> a[i];
        if(mina > a[i])
        mina = a[i];
    }
    for (int i = 0; i < N; i++) 
    {
        cin >> b[i];
        if(maxb < b[i])
            maxb =b[i];
    }
    if(K==0)
    {
        cout << mina;
    }
    ll l = 0 , r = maxb+mina;
    ll Ans = 0;
    while(l+1 < r)
    {
        ll m = l + (r-l)/2;
        ll profit = 0;
        ll sad = 0;
 
        for (int i = 0; i < N; ++i) 
        {
            if (m <= a[i]) profit += m;
            else if (m <= b[i]) 
            {
                profit += m;
                sad++;
            }
        }
        if(sad > K)
        {
            r = m;
        }
        else if(sad == K)
        {
            r=m;
            Ans = max(Ans , profit);
        }
        else
        {
            Ans = max(Ans , profit);
            l=m;
        }
    }
    cout << Ans;
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
