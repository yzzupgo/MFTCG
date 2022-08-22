#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<queue>
#include<climits>
#include<set>
#define ll long long
using namespace std;
int main() {
ll n,count=0;
cin >> n;
for (ll i = 1; i <= n; i++) {
string s = to_string(i);
if (s.size() % 2 != 0) {
count++;
}
}
cout << count << endl;
}
