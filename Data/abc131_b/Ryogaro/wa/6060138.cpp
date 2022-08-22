#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int aji = 0;
if (L > 0) {
for (int i = L + 1; i <= L + N - 1; i++) {
aji += i;
}
}
else if (L + N < 0) {
for (int i = L; i <= L + N - 2; i++) {
aji += i;
}
}
else {
for (int i = L; i <= L + N - 1; i++) {
aji += i;
}
}
cout << aji;
}
