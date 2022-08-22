#define MOD 1000000007
#pragma GCC target("popcnt")
#include <bits/stdc++.h>
#include <numeric>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;
if(108 * n < 20600) {
cout << "Yay!";
} else if(108 * n == 20600) {
cout << "so-so";
} else {
cout << ":(";
}
cout << endl;
}
