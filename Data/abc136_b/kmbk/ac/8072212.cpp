#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
#include<tuple>
#include<string>
typedef long long int ll;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define F first
#define S second
using namespace std;
const ll INF = 10000000000000;
int main() {
int n;
int sum = 0;
cin >> n;
if (n < 10)sum += n;
else if (n >= 10 && n < 100)sum = 9;
else if (n >= 100 && n < 1000)sum += 9 + n - 99;
else if (n >= 1000 && n < 10000)sum = 909;
else if (n >= 10000 && n < 100000)sum += 9 + 900 + n - 9999;
else if (n == 100000)sum = 90909;
cout << sum << endl;
}
