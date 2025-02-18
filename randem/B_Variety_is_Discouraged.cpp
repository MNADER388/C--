#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N;
    cin >> N;
    vector <ll> arr(N);
    map <ll , ll> freq;
    for(int i =0 ;i < N ;i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    ll Ans = 0 , la = -1 , ra = -1;
    ll cnt = 0 , l = -1 ,r =-1;
    for(int i =0 ;i < N ;i++)
    {
        if(freq[arr[i]] == 1)
        {
            cnt++;
            if(l == -1)
            {
                l = i;
                r=i-1;
            }
            r++;
        }
        else
        {
            if(cnt > Ans)
            {
                Ans = cnt;
                la =l;
                ra =r;
            }
            cnt= 0 ;
            l =-1;
            r = -1;
        }
    }
    if(cnt > Ans)
    {
        Ans = cnt;
        la =l;
        ra =r;
    }
    if(la==-1)
    {
        cout << 0;
        return;
    }
    cout << la+1 << " " << ra+1;
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
