//#include "pch.h" 
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <stdio.h>
#include <vector>
#include <time.h>
#include <iomanip>
#include <thread>
#include <atomic>
#include <mutex>
#include <future>
#define double long double
#define int long long
#define low lower_bound
#define upp upper_bound
#define mod (int)(1e9 + 7)
#define inf (int)1e16
#define rep(i,n) for(int i=0;i<n;i++)
#define all(vec) vec.begin(),vec.end()
#define vsort(vec) sort(all(vec))
#define vrever(vec) reverse(all(vec));
#define vunsort(vec) vsort(vec); vrever(vec);
#define bisea binary_search
using namespace std;
signed main() {
	int a[5];
	int sum = 0;
	int k = 10;
	int w = 1;
	rep(i, 5) {
		cin >> a[i];
		if (a[i] % 10 == 0) sum += a[i];
		else sum += a[i] + (10 - (a[i] % 10));
		if (a[i] % 10 <= k&&a[i] % 10 != 0) {
			k = a[i] % 10;
			w = i;
		}
	}
	cout << sum -(10- k)<< endl;
}