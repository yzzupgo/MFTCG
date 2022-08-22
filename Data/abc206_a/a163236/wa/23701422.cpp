#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long INF = 1LL << 60;
ll MOD = 1e9 + 7;
int main() {
int N;
cin >> N;
if(1.08 * N == 206) {
cout << "so-so" << endl;
} else if(1.08 * N < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
