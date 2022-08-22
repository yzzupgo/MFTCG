#include <iostream>
#include <utility>
#include <functional>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <tuple>
#include <stdlib.h>
using namespace std;
#define rep(i,n,x) for(int i=n;i<x;i++)
#define rem(i,n,x) for(int i=n;i>x;i--)
#define SORT(x) sort(x.begin(),x.end())
#define REV(x) reverse(x.begin(),x.end())
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define setp(x) setprecision(x)
using LL = long long;
using ULL = unsigned long long;

int kiriage(int &number) {
	if (number % 10 == 0) return number;
	number++;
	return kiriage(number);
}

int main() {
	int sum = 0;
	int amari_min = 10;
	rep(i, 0, 5) {
		int menu = 0;
		cin >> menu;
		int amari = menu % 10;
		if (amari != 0) {
			amari_min = min(amari_min, amari);
			kiriage(menu);
		}
		sum += menu;
	}
	cout << sum - (10 - amari_min) << endl;
	return 0;
}