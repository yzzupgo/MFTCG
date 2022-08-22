#include <utility>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <map>
#include <set>
#include <list>
#include <string>
#define REP(i,n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pll;
int main()
{
int A, B;
cin >> A >> B;
int ret = 0;
if (B >= 13)
ret = B;
else if (B >= 6)
ret = B / 2;
else
ret = 0;
cout << ret << endl;
}
void cheatsheet()
{
vector<int> vecloop;
REP(i, 10)
{
vecloop.push_back(i);
}
int a = 1;
int b = 5;
swap(a, b);
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
sort(arr, arr + 9, greater<int>());
vector<int> vec(arr, end(arr));
sort(vec.begin(), vec.end());
cout << lower_bound(vec.begin(), vec.end(), 2)[0];
map<Pll, ll> m;
m[Pll(10, 100)] = 100;
}
