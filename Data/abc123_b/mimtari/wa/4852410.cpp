#include <iostream>

int main()
{
	int a[5];
	int k;
	for (auto i = 0; i < 5; i++)
	{
		std::cin >> a[i];
	}
	std::cin >> k;

	int min_index = 0;

	for (auto i = 0; i < 5; i++)
	{
		if ((a[min_index] - 1) % 10 > (a[min_index] - 1) % 10)
		{
			min_index = i;
		}
	}
	int min = 0;

	for (auto i = 0; i < 5; i++)
	{
		if (i == min_index)
		{
			continue;
		}

		if (a[i] % 10 == 0)
		{
			min += a[i];
		}
		else
		{
			min += (a[i] / 10) * 10 + 10;
		}
	}

	min += a[min_index];

	std::cout << min;
}