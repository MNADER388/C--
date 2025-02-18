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
    int A , B , C;
    if(N%2==0)
    {
        A = N/2;
        B = A-1;
        C = 1;
    }
    else
    {
        C = 1;
        N--;
        N /=2;
        if(N%2==0)
        {
            A = N+1;
            B = N-1;
        }
        else
        {
            A = N+2;
            B = N-2;
        }
    }
    cout << A << " " << B << " " << C;
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
