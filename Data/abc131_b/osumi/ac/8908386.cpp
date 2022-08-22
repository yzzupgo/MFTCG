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
ll n, l;
cin >> n >> l;
if (l<=0&&0<=l+n-1) {
cout << n * (l+l+ n - 1) / 2 << endl;
}
else if (l + n - 1 < 0) {
cout << (n - 1)*(l + (l + n - 2)) / 2 << endl;
}
else {
cout << (n - 1)*(l+1+(l+n-1)) / 2 << endl;
}
}
