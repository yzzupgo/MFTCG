#include<iostream>
#include <algorithm>
#include <functional>
#include<vector>
#include<math.h>
#include<bitset>
#include<string>
#include <deque>
#include<queue>
#include <iomanip>
#include<map>
#include <random>
#include<type_traits>
#include<stack>
#include <sstream> 
using namespace std;


#define ll long long int
#define all(v) begin(v), end(v)
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for(int i = (int)(s); i < (int)(n); i++)
//typedef vector<int> V;
//typedef vector<VV> VVV;

vector<long long int> vec;

int main() {
	long long int a[5],c=0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++) {
		vec.push_back(a[i]%10);
	}
	sort(vec.begin(), vec.end(), greater<long long int>());
	for (int i = 0; i < 5; i++) {
		if (vec[i] != 0)c = vec[i];
	}
	ll sum = 0;
	for (int i = 0; i < 5; i++) {
		if (a[i] % 10 == 0) {
			sum += a[i];
		}
		else {
			sum += (a[i] / 10+1) * 10;
		}
	}
	cout << sum+c-10 << endl;
}
