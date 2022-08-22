#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
int L;
cin >> N >> L;
int min = L;
int max = L + N - 1;
int sum = 0;
for (int i = 1; i <= N; i++){
sum += L + i - 1;
}
if (max <= 0){
cout << sum - max << endl;
}
else if (min >= 0){
cout << sum - min << endl;
}
else {
cout << sum << endl;
}
}
