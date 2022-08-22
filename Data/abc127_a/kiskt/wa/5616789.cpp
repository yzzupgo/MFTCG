#include<iostream>
using namespace std;
int main() {
int n; cin >> n;
int m; cin >> m;
int* l;
int* r;
l = new int[n];
r = new int[n];
for (int i = 0; i < m; i++) {
cin >> l[i];
cin >> r[i];
}
int ch = 0;
int sum = 0;
for (int i = 0; i < n; i++) {
for (int j = 0; j < m&&ch==0; j++) {
if (l[j] <= i+1 && i+1<= r[j]) {
ch =0;
}
else if (j == m - 1) {
ch == -1;
}
else { ch = 1; }
}
if (ch == -1) {
sum += 1;
}
ch = 0;
}
delete l;
delete r;
cout << sum;
return 0;
}
