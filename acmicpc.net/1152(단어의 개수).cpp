#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char str[1000000];
	int i,cnt=0;

	cin.getline(str, 1000000);


	for(i=0; str[i] != '\0'; i++)
	{
		if (str[i] >= 33 && str[i+1] < 33)
			cnt++;

	}

	cout << cnt;
	return 0;


}