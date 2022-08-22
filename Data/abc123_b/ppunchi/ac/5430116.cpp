#include "bits/stdc++.h"

using namespace std;
int main()
{
	vector<int> a(5);
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	int min = 10;
	int index = -1;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] % 10 < min && a[i] % 10 != 0) {
			min = a[i] % 10;
			index = i;
		}
	}
	int s = 0;
	for (int i = 0; i < 5; i++)
	{
		if (i != index && a[i] % 10 != 0)
			s += (a[i] / 10) * 10 + 10;
		else
			s += a[i];
	}
	cout << s << endl;
}

