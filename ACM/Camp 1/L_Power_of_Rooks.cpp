
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
    vector<ll> rowCount(N+1), colCount(N+1);
    set<ll> freeRows, freeCols;

    for (int i = 1; i <= N; i++)
    {
        freeRows.insert(i);
        freeCols.insert(i);
    }
    
    while(Q--)
    {
        int ty;
        cin >> ty;
        if(ty == 1)
        {
            ll x ,y;
            cin >> x >> y;
            rowCount[x]++;
            colCount[y]++;

            if(rowCount[x] == 1)
                freeRows.erase(x);
            if(colCount[y] == 1)
                freeCols.erase(y);
            
        }
        else if(ty==2)
        {
            ll x ,y;
            cin >> x >> y;
            rowCount[x]--;
            colCount[y]--;

            if(rowCount[x] == 0)
                freeRows.insert(x);
            if(colCount[y] == 0)
                freeCols.insert(y);
        }
        else
        {
            ll l1 , l2 , r1 , r2;
            cin >> l1 >> r1 >> l2 >> r2;
            auto itrow = freeRows.lower_bound(l1);
            auto itcol = freeCols.lower_bound(r1);
            bool ch1 = false , ch2 = false;
            if(itrow != freeRows.end() && *itrow <= l2) ch1 = true;
            if(itcol != freeCols.end() && *itcol <= r2) ch2 =true;
            if(ch1 && ch2)
                cout << "No\n";
            else
                cout << "Yes\n";
           
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
