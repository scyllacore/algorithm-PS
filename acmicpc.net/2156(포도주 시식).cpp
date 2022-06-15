#include <iostream>

using namespace std;

int max(int a,int b,int c) {

	int max;

	max = a > b ? a : b;
	max = max > c ? max : c;

	return max;
}

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n,i;
	cin >> n;

	int* arr = new int[n + 1];
	int* dp = new int[n + 1];

	for (i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];


	for (i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
	}


	cout << dp[n];

	delete[] dp, arr;
	return 0;

}