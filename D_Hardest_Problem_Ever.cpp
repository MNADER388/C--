#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N , K;
    cin >> N >> K;
    vector <ll> V(N);
    for(int i=0 ;i < N ;i++)cin >> V[i];
    sort(all(V));
    ll Sum= 0;
    for(int i = 1; i<= K ;i++)
    {
        Sum += V[N-i];
    }
    cout << Sum;
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
