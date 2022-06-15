#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
	char name[20];
	int score;
};

bool compare(const Student& s1, const Student& s2)
{
	return s1.score > s2.score;
}


int main()
{
	//cin.tie(NULL);
	//ios::sync_with_stdio(false);

	int n, i;
	cin >> n;

	Student* students = new Student[n];

	for (i = 0; i < n; i++)
	{
		cin >> students[i].name >> students[i].score;
	}


	sort(students, students + n, compare);

	for (i = 0; i < n; i++)
	{
		cout << students[i].name << ' ' << students[i].score << '\n';
	}



}