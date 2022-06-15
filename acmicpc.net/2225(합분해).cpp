#include <iostream>
#define MOD 1000000000 // 나머지는 MOD로 정의해두기

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, K;
	int i, j, k;

	cin >> N >> K;

	long long** dp = new long long* [N + 1];

	for (i = 0; i <= N; i++)
	{
		dp[i] = new long long[K + 1];
		dp[i][1] = 1;
	}

	for (j = 2; j <= K; j++)
	{
		for (i = 1; i <= N; i++) {
				
			dp[i][j] = 1;
			for (k = i; k >= 1; k--) {
				dp[i][j] += dp[k][j - 1];
			}
			dp[i][j] %= MOD;
		}
	}

	cout << dp[N][K];

}

//자료형 큰거 쓰자 그냥.. 
//자료형 잘못써도 오답 처리 된다 . int -> long long으로 바꿈