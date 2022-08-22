#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define rep(i,n) for(int i = 0; i < (int)(n);i++)
typedef long long ll;
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int sum = 0;
rep(i, n) {
sum += l + i;
}
if (l <= 0 && n + l >= 0) {
cout << sum << endl;
}
else if (l < 0 && n + l < 0 ) {
cout << sum - l - n + 1 << endl;
}
else {
cout << sum - l << endl;
}
return 0;
}
