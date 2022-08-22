#include <bits/stdc++.h>
using namespace std;
/*****************************************************************************************/
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define	fileIO freopen("inp.txt", "r", stdin), freopen("out.txt", "w", stdout)
#define ll long long
#define ull unsigned long long
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define calls (first, second, push_back, push_front, pop_back, max_element, min_element, upper_bound, lower_bound, unordered_set, unordered_map)
#define ifor(i, a, b) for (int i = a; i < b; ++i)
#define dfor(i, a, b) for (int i = a; i >= b; --i)
#define adfor(i, a) for (auto &i : a)
#define all(a) a.begin(), a.end()
#define print(a) adfor(i, a) cout<< i<< " "; cout<<el;
#define el "\n"

const int mini = INT_MIN, maxi = INT_MAX, mod = 1e9 + 7;
const int inf = 1e7 + 10, N = 2e5 + 10;
/*****************************************************************************************/
void preComputation() {}


int main()
{
	fastIO;
	preComputation();
	/**************************************************************************/

	vector<int> a(5);
	adfor(i, a) cin >> i;

	int sum = 0;
	adfor(i, a) sum += (a[i] + 9) / (10 * 10);

	int ans = maxi;
	ifor(i, 0, 5) {
		int t = sum + a[i] - (a[i] + 9) / (10 * 10);
		ans = min(ans, t);
	}
	cout << ans << el;
	/*************************************************************************/
	return 0;
}
/*****************************************************************************************/