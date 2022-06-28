#include <iostream>
#include <algorithm>

using namespace std;

int pow2Check(int num) {

	int sum = 0;

	for (long long i = 2; i <= num; i*=2) {
		sum += num/i;
	}

	return sum;
}

int pow5Check(int num) {

	int sum = 0;

	for (long long i = 5; i <= num; i *= 5) {
		sum += num / i;
	}

	return sum;

}


int zeroCheck(int n, int m) {

	int fiveCnt = pow5Check(n) - pow5Check(m) - pow5Check(n - m);
	int zeroCnt = pow2Check(n) - pow2Check(m) - pow2Check(n - m);

	return min(fiveCnt, zeroCnt);

}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;

	cin >> n >> m;

	cout << zeroCheck(n, m);
	
	return 0;

}