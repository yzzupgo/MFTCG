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
int mimi = 0;
rep(i, n) {
sum += l + i;
mimi = min(mimi, abs(l + i));
}
cout << sum - mimi << endl;
return 0;
}
