#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a)   a.begin(),a.end()
#define SMTYON  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//..........................................SMTYON..............................................................................................................
void custom_hash (std:: string& password)
{
    uint64_t FIRST_XOR = 4762;
    uint64_t SECOND_XOR = 763;
    uint64_t MOD = 1e15;
    const int length = password.size();

    // Validate password length
    if (length < 8 || length > 40) {
        throw std::invalid_argument("Password length must be between 8 and 40 characters");
    }

    uint64_t result = 0;

    // loop on every char
    for (int i = 0; i < length ; i++)
    {
        uint64_t cur_char = password[i];

        // do the math!!
        cur_char = ((((((cur_char+23)^FIRST_XOR)%MOD)*(i+1))^SECOND_XOR)%MOD);

        // add it to the result
        result += cur_char;
        result %= MOD;
    }
    

    // make the result a string
    std:: string result_str = std:: to_string(result);

    // clear the string
    password ="";

    // make a string of # and * of each char of the result
    for(int i =0 ; i < result_str.size() ; i++)
    {
        long long current = result_str[i]-'0';
        while(current >= 5)
        {
            current -= 5;
            password.push_back('#');
        }
        while(current >= 1)
        {
            current -= 1;
            password.push_back('*');
        }
        password.push_back('|');
    }
}
void Mahmoud_Nader()
{
    set <ll> S;
    for(int i= 1 ; i <= 22000 ;i++)
    {
        S.insert(i^48);
    }
    cout << S.size();
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
