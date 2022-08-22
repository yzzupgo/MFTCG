#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <map>
#include <algorithm>
using namespace std;
int main() {
long int N, L; cin >> N >> L;
vector<int> S(N);
int max = 0, min = 100;
for (int i = 1; i <= N; i++) {
S.at(i - 1) = L + i - 1;
max += S.at(i - 1);
if (min > abs(S.at(i - 1))) min = abs(S.at(i - 1));
}
cout << max - min << endl;
}
