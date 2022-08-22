#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L; cin >> N >> L;
vector<int> taste(N);
int sum = 0;
for (int i = 0; i < N; i++) {
taste.at(i) = L + i;
sum += taste.at(i);
}
int eat = 0;
int min = 10101;
for (int i = 0; i < N; i++) {
if (abs(taste.at(i)) < min) min = abs(taste.at(i)); eat = taste.at(i);
}
cout << sum - eat << endl;
}
