#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <algorithm>
#include <cassert>
#include <string>
#include <climits>
#include <numeric>

#define all(x) begin(x),end(x)

using namespace std;
using ll = long long;

int main()
{
	vector<int> A(5);
	for (int i = 0; i < 5; ++i)
		cin >> A[i];
	int last = 9;
	int index = 0;
	int ll = 0;
	for (int i = 0; i < 5; ++i) {
		if (A[i] % 10 < last) {
			last = A[i] % 10;
			index = i;
			ll = A[i];
		}
	}

	int time = 0;
	for (int i = 0; i < 5; ++i) {
		if (index == i)
			continue;
		int tmp = A[i];
		if (tmp % 10 != 0) {
			int t = tmp % 10;
			int s = 10 - t;
			A[i] += s;
		}
		time += A[i];
	}
	time += ll;
	cout << time << endl;
}

