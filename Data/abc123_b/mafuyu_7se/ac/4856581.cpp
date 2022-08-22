#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
	char s[5];
	int a[5];
	int min = 255;
	int minnum;
	int minidx=0;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		sprintf(s, "%d", a[i]);
		if (a[i] % 10 != 0)
		{
			if (atoi(&s[strlen(s) - 1]) < min)
			{
				min = atoi(&s[strlen(s) - 1]);
				minnum = a[i];
				minidx = i;
			}
		}
		else
		{
			if (a[i] < minnum)
			{
				minnum = a[i];
				minidx = i;
			}

		}
		if(a[i]%10 != 0)a[i] += 10 - atoi(&s[strlen(s) - 1]);
		sum += a[i];
	}

	sum -= a[minidx];
	sum += minnum;

	cout << sum << endl;
}