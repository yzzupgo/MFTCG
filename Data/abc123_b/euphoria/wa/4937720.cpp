#include <iostream>

using namespace std;



int main() {
	int a, b, c, d, e;

	cin >> a >> b >> c >> d >> e;

	int min_1 = 0;
	int price = 0;

	int orders[] = { a, b, c, d, e };

	for (int order : orders)
	{
		//cout << order << endl;
		if ((order + 9) % 10 < (min_1 + 9) % 10)
		{
			if (min_1 > 0)
			{
				price += min_1;
			}
			min_1 = order;
		}
		else
		{
			price += (order + 9) - (order + 9) % 10;
		}
		
	}
	price += min_1;
	cout << price << endl;
}

