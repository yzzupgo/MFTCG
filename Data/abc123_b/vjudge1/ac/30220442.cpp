#include <iostream>
using namespace std;
int main()
{
	int a[5], sum = 0;
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	for (int i = 0; i < 4; i++)
	{
		int k = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (a[k] % 10 == 0)
				break;
			else if (a[j] % 10 == 0)
				k = j;
			else if (a[k] % 10 < a[j] % 10)
				k = j;
		}
		int tmp = a[k]; a[k] = a[i]; a[i] = tmp;
		sum += a[i];
		if (sum % 10)
			sum = (sum / 10) * 10 + 10;
	}
	sum += a[4];
	cout << sum << endl;
	return 0;
}