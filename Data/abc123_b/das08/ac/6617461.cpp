#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>
#include <stdio.h>
#include <stack>
#include <queue>
#include <cstdio>
#include <cmath>
#include <iterator>
#include <map>

using namespace std;

#define Int int64_t

void printVec(std::vector<int>& vec) {
	std::cout << "";
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
void printVec1(std::vector<string>& vec) {
	std::cout << "";
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
	vector.erase(vector.begin() + index);
}




int main() {
	//int n; cin >> n;
	vector<int> h(5);
	vector<int> amari(5);
	vector<pair<int, int>> sub(5);
	for (int i = 0; i < 5; i++) {
		cin >> h[i];
		amari[i] = h[i] % 10;
		if (amari[i]==0) sub[i].first = 10;
		else sub[i].first = amari[i];
		sub[i].second = h[i];
	}
	
	sort(sub.begin(), sub.end());

	
	int sum = 0;
	for (int i = 1; i < 5; i++) {
		if (sub[i].first!=10) sum += ((sub[i].second / 10) + 1) * 10;
		else sum += sub[i].second;
	}
	sum += sub[0].second;

	cout << sum <<endl;

	return 0;
}