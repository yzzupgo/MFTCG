#include <bits/stdc++.h>
typedef long long int lint;

#define PI acos(-1)
#define INF64 1LL << 60
#define INF32 1 << 29
#define LIMIT(d_in, d_min, d_max) max(d_min, min(d_max, d_in))
#define all(a) (a).begin(), (a).end()
#define INV ((long long int)1000000007)

using namespace std;

void execute()
{
	int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;

	A += 9;
	B += 9;
	C += 9;
	D += 9;
	E += 9;
	int min_extra = min({A % 10, B % 10, C % 10, D % 10, E % 10});
	if (min_extra == 9)
		min_extra = 0;
	else
		min_extra++;
	A /= 10;
	B /= 10;
	C /= 10;
	D /= 10;
	E /= 10;

	cout << (A + B + C + D + E) * 10 + min_extra - 10 << endl;
	return;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	std::cout << std::fixed << std::setprecision(15);
	execute();

	int stop;
	cin >> stop;

	return 0;
};