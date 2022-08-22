#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long INF = 1LL << 60;
ll MOD = 1e9 + 7;
int main() {
int N;
cin >> N;
int ans = 1.08 * N;
if(ans == 206) {
cout << "so-so" << endl;
} else if(ans < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
