#include <iostream>
#include <time.h>
#include <string>

using namespace std;


int main()
{
	int a[5];
	int time = 0;
	int minTime = 10;
	for (int i = 0;i < 5;i++)
	{
		cin >> a[i];
	}
	for (int i = 0;i < 5;i++)
	{
		int num = a[i];
		for (;num > 10;num -= 10)
		{
		}
		if (num < minTime)
		{
			minTime = num;
		}
		time += a[i] + 10 - num;
	}
	time -= minTime;
	cout << time;
		return 0;
}
