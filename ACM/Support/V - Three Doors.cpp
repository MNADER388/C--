#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
#define LL long long 
#define ULL unsigned long long
int door[4];

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int key;
		cin >> key;
		for (int i = 1; i <= 3; i++)cin >> door[i];
		bool check = true;
		for (int i = 0; i < 2; i++)
		{
			key = door[key];
			if (key == 0)
				check = false;
		}
		if (check)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
