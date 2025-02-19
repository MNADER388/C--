#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    int N , Q;
    cin >> N;
    multiset <ll> S;
    for(int i =0 ;i < N ;i++)
    {
        ll X;cin >> X;
        S.insert(X);
    }
    set <ll> pr;
    ll product = 1;
    vector<ll> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    for (auto p : primes) 
    {
        product *= p;
        if (product > 1e13) break;
        pr.insert(product);
    }
    
    cin >> Q;
    while(Q--)
    {
        ll X;
        cin >> X;
        if(X == 1)
        {
            cout << "Case Declined\n";
            continue;
        }
        if(pr.count(X))
        {
            bool ch = true;
            ll X1 = X;
            for(ll i = 2 ; i <= 100 ; i++)
            {
                if(X1 % i == 0)
                {
                    if(!S.count(i))
                    {
                        ch = false;
                        break;
                    }
                    X1/=i;
                }
            }
            if(X1 != 1)
                ch=false;
            if(ch)
                cout << "Case Solved\n";
            else
                cout << "Case Opened\n";
        }
        else
        {
            cout << "Case Declined\n";
        }
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
