#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++) {
cin >> arr[i];
}
int cnt = 1;
int a = 1, b = 0;
sort(arr, arr + n);
for(int i = 1; i < n; i++) {
if(arr[i] != arr[i - 1]) {
b = b + (a * (a - 1));
cnt++;
a = 1;
} else if(arr[i] == arr[i - 1]) {
a++;
}
}
b = b + (a * (a - 1));
int ans = n * (n - 1) - b;
cout << ans / 2;
return 0;
}
