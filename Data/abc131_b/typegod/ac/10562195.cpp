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
int ans = l;
int a[200];
int absans = abs(l);
rep(i, n) {
a[i] = l + i;
sum += l + i;
if (abs(a[i]) < absans) {
absans = abs(a[i]);
ans = a[i];
}
}
cout << sum - ans << endl;
return 0;
}
