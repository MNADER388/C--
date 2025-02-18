#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int A , B , C;
    cin >> A >> B >> C;
    if(A+B >= 10) cout << "YES";
    else if(A+C >= 10) cout << "YES";
    else if(B+C >= 10) cout << "YES";
    else  cout << "NO";
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
