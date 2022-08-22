#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename temp>using ordered_set = tree<temp, null_type, less_equal<temp>, rb_tree_tag, tree_order_statistics_node_update>;
#define PI acos(-1)
#define ll long long
const int M = 1e5 + 5;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
double n;
int x;
cin >> n;
n = (1.00 * n * 1.08);
x = n;
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
