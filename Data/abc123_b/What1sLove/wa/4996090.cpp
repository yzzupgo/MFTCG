#include <iostream>
using namespace std;
int main()
{
	int order[5];
	int ordercut[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &order[i]);
		ordercut[i] = (order[i] / 10) + 1;
	}
	int min = 888;
	for (int i = 0; i < 5; i++)
	{
		int tmin = 0;
		for (int j = 0; j < 5; j++)
		{
			if (j == i)
			{
				tmin += order[i];
			}
			else
			{
				tmin += ordercut[i];
			}
		}
		min = min > tmin ? tmin : min;
	}
	printf("%d\n", min);
}