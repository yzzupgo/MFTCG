#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
int L;
cin >> N >> L;
int sum = 0;
for (int i = 1; i <= N; i++){
sum += L + i - 1;
}
if (L <= 0){
cout << sum << endl;
}
else {
sum = sum - L;
cout << sum << endl;
}
}
