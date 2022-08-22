#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
	int l;
	std::vector<int> t;
	long p, last, buf;
	last = 0;
	buf = 10;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> l;
		t.push_back(l);
		if (buf > l % 10 && l % 10 != 0)
		{
			buf = l % 10;
			last = i;
		}
	}
	long result;
	for (int i = 0; i < 5; i++)
	{
		if (i != last && t[i] % 10 != 0)
		{
			t[i] = (t[i] + 10) / 10 * 10;
		}
		result += t[i];
	}
	std::cout << result << "\n";

    return 0;
}

