#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N;cin>> N;
    vector <ll> arr(N);
    ll lp = -1 , rp = -2, ln =-1 , rn =-1;
    for(int i = 0 ;i < N;i++)
    {
        cin >> arr[i];
        if(arr[i] > 0)
        {
            if(lp == -1)  lp = i;
            rp = i;
        }
        else 
        {
            if(ln == -1)  ln = i;
            rn = i;
        }
    }
    ll Sumpo = 0 , Sumne =0;
    for(int i = lp ; i <= rp ; i++) if(arr[i] > 0) Sumpo += arr[i];
    for( int i = rp+1 ; i< N;i++) if(arr[i] < 0) Sumpo -= arr[i];

    for(int i = ln ; i <= rn ; i++) if(arr[i] < 0) Sumne -= arr[i];
    for( int i = 0 ; i < ln ;i++) if(arr[i] > 0) Sumne += arr[i];

    cout << max(Sumpo , Sumne) ;
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
