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

	int min = 0;

	for (auto i = 0; i < 5; i++)
	{
		min += (a[i] - 1 / 10) * 10 + 10;
	}

	std::cout << min;

}