
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON...............................................................................................................
void Mahmoud_Nader()
{
    ll N , Q;
    cin >> N >> Q;
    map<ll , ll> R;
    map<ll , ll> C;
    ordered_set row;
    ordered_set col;
    while(Q--)
    {
        int ty;
        cin >> ty;
        if(ty == 1)
        {
            ll x ,y;
            cin >> x >> y;
            row.insert(x);
            col.insert(y);
            R[x]++;
            C[y]++;
        }
        else if(ty==2)
        {
            ll x ,y;
            cin >> x >> y;
            R[x]--;
            C[y]--;
            if(R[x] == 0)row.erase(x);
            if(C[y] == 0)col.erase(y);
        }
        else
        {
            ll l1 , l2 , r1 , r2;
            cin >> l1 >> r1 >> l2 >> r2;
            l2++,r2++;
            // instead of a loop !!
            ll X = (row.order_of_key(l2))-(row.order_of_key(l1));
            ll Y = (col.order_of_key(r2))-(col.order_of_key(r1));
            if(X == (l2-l1) || Y == (r2-r1))
            cout << "Yes\n" ;
            else
            cout << "No\n";
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
