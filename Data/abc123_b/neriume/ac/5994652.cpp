#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

int main() {
	int time[5];
	int timep[5];
	int sum=0;
	int pm = 1000;
	bool pf = false;
	vector<pair<int, int>> p;
	for (int i = 0; i < 5; i++)
	{
		cin >> time[i];
		if (time[i] % 10 != 0)
		{
			pf = true;
			if (pm > time[i] % 10)
			{
				pm = time[i] % 10;
			}
			time[i] -= time[i] % 10;
			time[i] += 10;
			
		}
		sum += time[i];
		//cout << sum << endl;
	}
	if(pf)
	{
		//cout << pm << endl;
			cout << sum - 10 + pm;
	}
	else
	{
		cout << sum;
	}
}