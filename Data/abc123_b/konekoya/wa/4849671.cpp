#include <iostream>
#include <time.h>
#include <string>

using namespace std;


int main()
{
	int a[5];
	int time = 0;
	for (int i = 0;i < 5;i++)
	{
		cin >> a[i];
	}
	for (int i = 0;i < 5;i++)
	{
		time += a[i];
		int num = a[i];
		for (;num > 10;num -= 10)
		{
		}
		time += a[i] +10 - num;
	}
	cout << time;
		return 0;
}
