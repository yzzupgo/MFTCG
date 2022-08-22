#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define INF numeric_limits<int>::max()
#define N 1000000007
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin >> n;
n = floor(n * 1.08);
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 26) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
