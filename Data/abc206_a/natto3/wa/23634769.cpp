#include <bits/stdc++.h>
using namespace std;
int main(void) {
int64_t a = 0;
int n;
int b = 1;
cin >> n;
vector<int> vec(n);
for(int i = 0; i < n; i++) {
cin >> vec[i];
}
sort(vec.begin(), vec.end());
for(int i = 0; i < n - 1; i++) {
if(vec[i] != vec[i + 1]) {
a += (n - i - 1) * b;
b = 1;
} else {
b++;
}
}
cout << a;
return 0;
}
