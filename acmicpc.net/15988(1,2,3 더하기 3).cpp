#include <iostream>
#define MOD 1000000009
using namespace std;

unsigned long long dp[1000001] = { 0,1,2,4 };

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, i, num;

	for (i = 4; i <= 1000000; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
	}

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> num;
		cout << dp[num] % MOD << '\n';
	}

	return 0;


}