#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N;cin >> N;
    char arr[N];
    int ind = -1;
    for(int i =0 ;i < N; i++)
    {
        cin >> arr[i];
        if(ind == -1 && arr[i] == '1')
        {
            ind = i;
        }
    }
    if(ind == -1)
    {
        cout << 0;
        return;
    }
    ll cnt =0;
    for(int i = N-2 ; i >= ind ; i--)
    {
        if(arr[i] != arr[i+1])
        {
            cnt++;
        }
    }
    cnt ++;
    cout << cnt;
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
