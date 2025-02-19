#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N , Q;
    cin >> N >> Q;
    ll arr[N+2][28]{};
    ll brr[N+2][28]{};
    for(int i =1 ;i <= N ;i++)
    {
        char X;cin >> X;
        arr[i][X-'a']++;
    }
    for(int i =1 ;i <= N ;i++)
    {
        char X;cin >> X;
        brr[i][X-'a']++;
    }
    for(int i =1 ;i <= N ;i++)
    {
        for(int j = 0 ;j < 27 ;j++)
        {
            arr[i][j] += arr[i-1][j];
            brr[i][j] += brr[i-1][j];
        }
    }
    while(Q--)
    {
        ll serag = 0 ,BZ =0;
        ll l , r;cin >> l >> r;
    
        for(int i = 0 ;i < 27 ;i++)
        {
            ll A = arr[r][i]-arr[l-1][i];
            ll B = brr[r][i]-brr[l-1][i];
            BZ += min(A , B);
            serag += (A+B)- (2*(min(A,B)));
        }
        if(serag == BZ)
            cout << "DRAW\n";
        else if(serag > BZ)
            cout << "SERAGMOHEMA\n";
        else
            cout << "BIGZ\n";
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
