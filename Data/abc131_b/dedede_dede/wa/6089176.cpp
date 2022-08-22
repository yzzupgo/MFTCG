#include <bits/stdc++.h>
using namespace std;
int n, l;
int main() {
cin >> n >> l;
vector<int> taste(n);
int sum = 0;
for (int i = 0; i < n; i++) {
taste[i] = l+i;
sum += taste[i];
taste[i] = abs(taste[i]);
}
int mini = *min_element(taste.begin(), taste.end());
cout << sum - mini << endl;
return 0;
}
