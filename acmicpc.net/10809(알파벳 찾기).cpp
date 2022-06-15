#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;
	int alpha[26],i;


	for (i = 0; i < 26; i+=2)
	{
		alpha[i] = -1;
		alpha[i+1] = -1;
	}

	cin >> str;

	for (i = 0; i < str.size(); i++)
	{
		if (alpha[str[i] - 97] == -1) {
			alpha[str[i] - 97] = i;
		}
	}

	for (i = 0; i < 26; i++)
	{
		cout << alpha[i] << ' ';
	}

}