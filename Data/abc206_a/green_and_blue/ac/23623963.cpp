#include<iostream>
#include<vector>
#include<cstring>
#include<map>
#include<unordered_set>
#include<set>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<stack>
#include<queue>
#include<unordered_map>
#define ll long long int
using namespace std;
const int NN = 100001;
const int mod = 1000000007;
const int bhot_chhota = -1;
const int papa_prime = 199999991;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll n;
cin >> n;
double ans = 1.08 * n;
ll x = ans;
if(x < 206) {
cout << "Yay!\n";
} else if(x == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
