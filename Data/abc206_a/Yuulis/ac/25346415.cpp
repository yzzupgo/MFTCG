#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1e+9;
#define MOD 1000000007;
int main() {
int N;
cin >> N;
int p = (1.08 * N) / 1;
if(p < 206) {
cout << "Yay!" << endl;
} else if(p == 206) {
cout << "so-so" << endl;
} else if(p > 206) {
cout << ":(" << endl;
}
}
