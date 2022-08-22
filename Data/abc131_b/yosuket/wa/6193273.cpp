#include<iostream>
#include<vector>
using namespace std;
int main() {
int N, L;
vector<double> V;
int sum1 = 0;
int sum2 = 0;
int wk=99999;
cin >> N >> L;
for (int i = 0; i < N; i++) {
sum1 = sum1 + (L + i);
}
for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
sum2 = sum1 - (L+i-1);
}
if ((abs(sum2 - sum1)) < abs(wk-sum1)) {
wk = sum2;
}
}
cout << wk << endl;
return 0;
}
