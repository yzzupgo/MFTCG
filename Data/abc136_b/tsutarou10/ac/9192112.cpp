#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <cstring>
using namespace std;
#define vsort(v) sort(v.begin(), v.end())
#define vsort_r(v) sort(v.begin(), v.end(), greater<int>())
#define vunique(v) v.erase(unique(v.begin(), v.end()), v.end())
#define mp make_pair
#define ts(x) to_string(x)
#define rep(i,a,b) for(int i = (int)a; i < (int)b; i++)
#define repm(i,a,b) for(int i = (int)a; i > (int)b; i--)
#define bit(a) bitset<8>(a)
#define des_priority_queue priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;
#define MAX_V 1000000
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
int n;
cin >> n;
int rsl = 0;
if(n / 9 >= 1) rsl += 9;
else {
rsl += n;
cout << rsl << endl;
return 0;
}
if(n / 999 >= 1) rsl += 999 - 100 + 1;
else {
rsl += max(0, n - 100 + 1);
cout << rsl << endl;
return 0;
}
if(n / 99999 >= 1) rsl += 99999 - 10000 + 1;
else {
rsl += max(0, n - 10000 + 1);
cout << rsl << endl;
return 0;
}
cout << rsl << endl;
}
