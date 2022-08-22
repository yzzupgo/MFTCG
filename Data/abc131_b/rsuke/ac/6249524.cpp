#include<iostream>
#include<string>
#include<vector>
using ll = unsigned long long;
using namespace std;
int main(void) {
int n, l;
cin >> n >> l;
int planned = 0;
int current_taste = 0;
int min_ix = INT32_MAX;
int min_taste = INT32_MAX;
for(int i = 1; i <= n; ++i) {
current_taste = l + i - 1;
planned += current_taste;
if (abs(current_taste) < abs(min_taste)) {
min_ix = i;
min_taste = current_taste;
}
}
cout << planned - min_taste << endl;
return 0;
}
