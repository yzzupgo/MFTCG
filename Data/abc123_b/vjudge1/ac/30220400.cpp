#include <bits/stdc++.h>
using namespace std;

int q[10010], tmp[10010];

int main()
{
	int a[6], b[6], i = 0, minn = 1e9, j = 0;
	for(; i < 5; i++)
	{
		cin>> a[i];
		b[i] = a[i];
		a[i] %= 10;
		if(a[i] < minn && a[i] != 0)
		{
			minn = a[i];
			j = i;
		}
	}
	minn = 0;
	for(i = 0; i < 5; i++)
	{
		if(i != j && a[i])
			b[i] = b[i] - a[i] + 10;
		minn += b[i];
	}
	cout<< minn;
}