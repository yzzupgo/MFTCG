#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int N, count = 0, i = 0;
cin >> N;
int arr[N];
for(int i = 0; i < N; i++) {
cin >> arr[i];
}
while(i < N / 2) {
if(arr[i] != arr[N - i - 1]) {
int a = arr[i];
int b = arr[N - i - 1];
for(int i = 0; i < N; i++) {
if(arr[i] == b) {
arr[i] = a;
}
}
count++;
}
i++;
}
cout << count;
return 0;
}
